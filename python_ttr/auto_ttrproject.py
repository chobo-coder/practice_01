import numpy as np
from sklearn.gaussian_process import GaussianProcessRegressor
from sklearn.gaussian_process.kernels import Matern
from scipy.optimize import minimize

# 테스트 실행 함수
def run_test(A, B, C, D, E, F, G, categorical_D):
    results = np.random.choice([0, 1], size=512)  # Pass/Fail 결과
    test_time = abs(A - 1) + abs(B - 2) + abs(C - 3) + abs(D - 4) + E + F + G
    return results, test_time

# 코사인 유사도 계산
def cosine_similarity(vec1, vec2):
    dot_product = np.dot(vec1, vec2)
    norm1 = np.linalg.norm(vec1)
    norm2 = np.linalg.norm(vec2)
    return dot_product / (norm1 * norm2)

# 초기 조건
initial_conditions = {
    "A": 1.0, "B": 2.0, "C": 3.0, "D": 4.0,
    "E": 1, "F": 10, "G": 100, "categorical_D": "Type1",
}
categorical_options = ["Type1", "Type2", "Type3"]
categorical_mapping = {v: i for i, v in enumerate(categorical_options)}

# 초기 결과
current_results, _ = run_test(**initial_conditions)
current_fail_indices = np.where(current_results == 0)[0]  # Fail DUT 인덱스
current_pass_indices = np.where(current_results == 1)[0]  # Pass DUT 인덱스

# 종료 조건 파라미터
pass_tolerance = 0.05  # Pass DUT 중 Fail로 변경될 수 있는 최대 비율 (n%)
bounds = [
    (0.0, 2.0),  # A
    (1.0, 3.0),  # B
    (2.0, 4.0),  # C
    (3.0, 5.0),  # D
    (1, 3),      # E
    (5, 15),     # F
    (90, 110),   # G
    (0, len(categorical_options) - 1)
]

# Gaussian Process 초기화
kernel = Matern(nu=2.5)
gp = GaussianProcessRegressor(kernel=kernel, alpha=1e-6, normalize_y=True)

# 초기 샘플 데이터
n_initial = 10
X_initial = np.random.uniform(
    [b[0] for b in bounds], [b[1] for b in bounds], size=(n_initial, len(bounds))
)
y_initial = np.array([cosine_similarity(current_results, run_test(*x[:-1], categorical_options[int(x[-1])])[0])
                      for x in X_initial])

# Gaussian Process 학습
gp.fit(X_initial, y_initial)

# 최적화 반복
n_calls = 50
X = X_initial
y = y_initial

for i in range(n_calls):
    # 다음 샘플 찾기
    res = minimize(
        lambda x: -gp.predict(x.reshape(1, -1)),  # 음수로 반환하여 최대화 문제 변환
        x0=np.random.uniform([b[0] for b in bounds], [b[1] for b in bounds]),
        bounds=bounds,
        method="L-BFGS-B"
    )
    next_x = res.x
    next_results, _ = run_test(*next_x[:-1], categorical_options[int(next_x[-1])])

    # Fail 매칭 확인
    fail_match = all(next_results[current_fail_indices] == 0)

    # Pass 제한 확인
    pass_fail_changes = np.sum(next_results[current_pass_indices] == 0)
    pass_fail_ratio = pass_fail_changes / len(current_pass_indices)

    if fail_match and pass_fail_ratio <= pass_tolerance:
        # 조건 충족 시 종료
        optimal_conditions = next_x
        print("\nTermination Condition Met!")
        break

    # 데이터 업데이트
    similarity = cosine_similarity(current_results, next_results)
    X = np.vstack((X, next_x))
    y = np.append(y, similarity)

    # Gaussian Process 업데이트
    gp.fit(X, y)

# 최적 조건과 결과 출력
optimal_conditions_dict = {
    "A": optimal_conditions[0],
    "B": optimal_conditions[1],
    "C": optimal_conditions[2],
    "D": optimal_conditions[3],
    "E": int(optimal_conditions[4]),
    "F": int(optimal_conditions[5]),
    "G": int(optimal_conditions[6]),


    "categorical_D": categorical_options[int(optimal_conditions[7])]
}
print("\nOptimal Test Conditions Found:")
print(f"Conditions: {optimal_conditions_dict}")