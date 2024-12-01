#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BANK_MAX 16       // Bank 최대 값
#define X_MAX 0x3FFF      // X 최대 값 (16진수: 0x0000 ~ 0x3FFF)
#define Y_MAX 0x3FF       // Y 최대 값 (16진수: 0x000 ~ 0x3FF)

void generate_log(int test_eqp) {
    int fail_count = (test_eqp == 512) ? 512 : 1024;
    char filename[50];
    FILE *log_file;

    // 로그 파일 이름 생성
    snprintf(filename, sizeof(filename), "fail_address_log_EQP_%d.txt", test_eqp);
    log_file = fopen(filename, "w");
    if (log_file == NULL) {
        printf("Error creating log file.\n");
        return;
    }

    // 현재 시간 출력
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(log_file, "==== Semiconductor Fail Address Log ====\n");
    fprintf(log_file, "Timestamp: %04d-%02d-%02d %02d:%02d:%02d\n",
            tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(log_file, "----------------------------------------\n");

    // 랜덤 Fail Address 생성
    srand((unsigned int)time(NULL));
    for (int i = 0; i < fail_count; i++) {
        int bank = rand() % (BANK_MAX + 1);         // Bank: 0 ~ 16
        int x = rand() % (X_MAX + 1);              // X: 0x0000 ~ 0x3FFF
        int y = rand() % (Y_MAX + 1);              // Y: 0x000 ~ 0x3FF
        fprintf(log_file, "Fail %d: Bank: 0x%02X, X: 0x%04X, Y: 0x%03X\n",
                i + 1, bank, x, y);
    }

    fprintf(log_file, "----------------------------------------\n");
    fclose(log_file);

    printf("Log file generated: %s\n", filename);
}

int main() {
    int test_eqp;

    printf("Enter TEST_EQP (512 or 1024): ");
    scanf("%d", &test_eqp);

    if (test_eqp != 512 && test_eqp != 1024) {
        printf("Invalid TEST_EQP value. Please enter 512 or 1024.\n");
        return 1;
    }

    generate_log(test_eqp);
    return 0;
}
