//여기서 이분 탐색 기능을 추가해야함 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
//자료구조
//정렬
//이분탐색
//해시를 사용한 집합과 맵
int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size -1;
    
    while(left<=right){
        int mid = (right - left)/2;
        if(target > mid){
            left = mid+1;
        }
        if(target < mid){
            left = mid+1; 
        }
        if(target == mid){
            return 1; 
            break;
        }
    
    
    }
    return 0;  
} 

int main(void){
    int num_sang ;
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

    for(int k=0;k<num_ex;k++)
    {
        for(int j =0;j<num_sang;j++)
        {
            if(arr_1[j] == arr_2[k])    check = 1;
        }
        printf("%d ",check);
        check = 0 ;

    }
    free(arr_1);
    free(arr_2);
    return 0;
}