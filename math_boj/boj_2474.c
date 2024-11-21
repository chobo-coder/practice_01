// #자승 #strlen #pow #string.h

// B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
// 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
// A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[100];
    int pow_;
    int num = 0;
    scanf("%s %d",str,&pow_);
    for(int i=0;i< strlen(str);i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            num +=(str[i]-'A'+10) * pow(pow_,strlen(str)-1-i);
        }
        if(str[i]<'A')
        {
            num +=(str[i]-'0') * pow(pow_,strlen(str)-1-i);
        }
    }
    printf("%d",num);
}
