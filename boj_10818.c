#include <stdio.h>

int main(void)
{
    int num;
    int arr[100];
    int min;
    int max;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        if(i==0)
        {
            min = arr[i];
            max = arr[i];
        }
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    printf("max:%d" ,max);
    printf("max:%d",min);
}