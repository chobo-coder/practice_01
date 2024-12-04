#include <stdio.h> 
void array_sort(int *arr ,int num)
{
    for(int i = 0; i<num ; i++)
    {
        for(int j=i+1 ; j<num; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
    
}
int main(){
    return 0;
}