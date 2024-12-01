#include<stdio.h>
#include<time.h>

int main(void) {
    time_t t;
    t =time(NULL);//현재시간을 반환함. 
    printf("%11d",t); //초단위 시간정수값
    return 0;
}