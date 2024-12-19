#include <stdio.h>
#include <stdlib.h>

int devide_three(int x){
    if (x%3 ==0) return x/3 ; 
    else { 
        printf("Error: x must be divisible by 3\n");
        return -1; 
    }
}
int devide_two(int x){
    if (x%2 ==0) return x/2 ; 
    else{
        printf("Error: x must be divisible by 2\n");
        return -1;
    }
}

int main(void){
    int x;
    int num = 0;
    scanf("%d",&x);
    while(x!=1){
        if(x%3==0) {
            x = devide_three(x);
            num++;
            printf("debug here 1");
            continue;
        }
        if(x%3 ==1&& x%2 ==0){
            if device_three(x-1)
            x= devide_three(x-1);
            num++;
            num++;
            continue;
        } 

        if(x%2==0) {
            x = devide_two(x);
            num++;
            printf("debug here 1");
            continue;
        } 
        else {
            x = x-1;              
            num++;
            printf("debug here 1");
            continue;
        } 
    }
    printf("%d\n",num);
    return 0;

}