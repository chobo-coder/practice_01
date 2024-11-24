#include <stdio.h>


void switching(int arr[],int x, int y) /// 배열의 input을 넣기 위해서는 그림과 같이 넣을 수 있고 배열을 함수에서 조작하면 배열의 주소를 조작하기 떄문에 global 변수인 배열의 값도 조작이 된다.
{
    int temp;
    temp = arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
int main(void)
{
    int arr[1000];
    int num;
    scanf("%d",&num);
    for(int k=0;k<num;k++)
        scanf("%d",&arr[k]);
    
    for(int i=0;i<num;i++)
    {
        for(int k =i+1;k<num;k++)
        {
            if(arr[i]> arr[k])
                switching(arr,i,k);
        }

    }
    for(int j=0; j<num; j++)
        printf("%d\n",arr[j]);
}
