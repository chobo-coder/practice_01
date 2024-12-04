#include <stdio.h> 


int binarySearch(int *arr, int size, int target){
    int left =0;
    int right = size -1;

    while(left<=right){
        int mid = (right -left)/2;
        if(target > mid){
            left = mid +1;
        }
        if(target < mid){
            left = mid +1; 
        }
        if(target == mid){
            return 1; 
            break;
        }
    }
    return 0;
};



int main(){
    return 0;
}