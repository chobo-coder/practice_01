// 이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.
// X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int son;
    int mom;
    scanf("%d",&x);
    if(x==1)
    {
        mom=1;
        son = 1;
    }
    for(int i=1;i*(i+1)/2<x;i++)
    {
        if(i%2!=0)
        {
            if(i*(i+1)/2==x)
            {
                mom = 1;
                son = i+1;
            }
            else
            {
                mom = 1 + (x- i*(i+1)/2 -1);
                son = i+1 -(x- i*(i+1)/2 -1);
            }
        }
        else
        {
            if(i*(i+1)/2==x)
            {
                mom = i+1;
                son = 1;
            }
            else 
            {
                mom = i+1 -(x- i*(i+1)/2 -1);
                son = 1 + (x- i*(i+1)/2 -1);
            }
        }
    }
    printf("%d/%d",mom,son);
}