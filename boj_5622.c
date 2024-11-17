// 전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.
// 숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.
// 상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.
// 할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int c_to_i(char k)
{
    int temp = (k -'a');
    return temp;
}
int i_to_t(int a)
{
    if (a<3)
        return 2;
    if (a<6)
        return 1+2;
    if (a<9)
        return 2+2;
    if (a<12)
        return 3+2;
    if (a<15)
        return 4+2;
    if (a<18)
        return 5+2;
    if (a<21)
        return 6+2;
    if (a<24)
        return 7+2;
    if (a<27)
        return 8+2;
    if (a<30)
        return 9+2;
}

int main(void)
{
    int num;
    char c[100];
    scanf("%s",&c);
    int sum =0;
    int temp_int;
    int temp_time;
    int time_sum=0;
    for(int i=0;c[i]!='\0';i++)
    {
        temp_int = c_to_i(c[i]);
        temp_time = i_to_t(temp_int);
        time_sum += temp_time;
    }
    printf("dial time:%d",time_sum);
    
    
}


// // 
// 숫자의 아스키 값은 48번부터 0~9를 할당하고 있으므로, char형 '1'은 정수값 49를 가진다. 
// 따라서 0의 아스키 값인 48을 char형의 값에서 빼주면 순수한 숫자를 얻어낼 수 있다.


// #include <stdio.h>


// int main() {

// 	int t;
// 	char s[101];

// 	scanf("%d %s", &t, s);
	
// 	int sum = 0;

// 	for (int i = 0; i < t; i++) {
// 		sum += s[i] - '0';
// 	}

// 	printf("%d", sum);


// 	return 0;
// }