#include <stdio.h> 
#include "external_head.h"
#include <malloc.h>
#include <stdlib.h>

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
    array_sort(arr_2,num_ex); // sort array 2 

    for(int j =0;j<num_sang;j++)
    {   
        int check;
        check = binarySearch(arr_2, num_ex, arr_1[j]);
        printf("%d ",check);
    }

    
    free(arr_1);
    free(arr_2);
    return 0;
}