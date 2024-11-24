#include <stdio.h>

//sum1(int[],int); // 배열 형태로 실인수 설정 // 배열은 포인터 변수이다!!!
//sum2(int*,int); // int* int 형태의 포인터 변수를 실인수로 배정함.
//sum3(int*,int); //함수에서 배열 혹은 포인터를 입력으로 쓸 때에는 *를 입력해서 포인터 변수라는 것을 꼭 기입할것!!!중요

void sum1(int arr[],int x)
{
    int total =0;
    for (int i=0;i<x;i++)
        total += arr[i];
    printf("total:%d\n",total);
}
void sum2(int *arr,int x)
{
    int total =0;
    for (int i=0;i<x;i++)
        total += arr[i];
    printf("total:%d\n",total);
}
void sum3(int *arr,int x)
{
    int total =0;
    for (int i=0;i<x;i++)
        total += *(arr+i);
    printf("total:%d\n",total);
}
int main(void)
{
    int num[5] = {1,2,3,4,5};
    sum1(num,5);
    sum2(num,5);
    sum3(num,5);

}

