#include <stdio.h> 
//#include "external_head.h"
#include <malloc.h>
#include <stdlib.h>

int binarySearch(int *arr, int size, int target){
    int left =0;
    int right = size -1;

    while(left<=right){
        int mid = (right +left)/2;
        if(target > arr[mid]){
            left = mid +1;
        }
        else if(target < arr[mid]){
            right = mid -1; 
        }
        else if(target == arr[mid]){
            return 1; 
            break;
        }
     //   printf("131");
    }
    return 0;
}
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

int main(void){
    int num_sang;
    int *arr_1;
    
    int num_ex;
    int *arr_2;
    int check = 0;  
    scanf("%d",&num_sang);
    arr_1 =(int*)malloc(sizeof(int)*num_sang);
    for(int i=0; i<num_sang; i++){
        scanf("%d",&arr_1[i]);
    }
    
    
    scanf("%d",&num_ex);
    arr_2 = (int*)malloc(sizeof(int)*num_ex);
    
    for(int g =0; g<num_ex;g++){
        scanf("%d",&arr_2[g]);
    }
    array_sort(arr_1,num_sang); //sort array 1
    //printf("%d", arr_1[0]);
    //array_sort(arr_2,num_ex); // sort array 2 
    //printf("%d", arr_2[0]);
    for(int j =0;j<num_ex;j++)
    {   
        int check= 0;
        check = binarySearch(arr_1, num_sang, arr_2[j]);
        printf("%d ",check);
    }

    
    free(arr_1);
    free(arr_2);
    return 0;
}