// #include<stdio.h>
// #include<time.h>

// int main(void){
//     time_t t1;
//     time(&t1);
//     printf("%11d]n",t1);

//     time_t t2;
//     t2 =time(NULL);
//     printf("%11d\n",t2);
    
//     return 0;
// }


#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>
#include <time.h> 

int main(void){
    time_t rawTime;
    struct tm* pTimeInfo =malloc(sizeof(struct tm));;//tm* structure를 가지는 변수 pTimeInfo 선언

    rawTime == time(NULL);//이때 Time을 배정해줌
    pTimeInfo = localtime(&rawTime);//현재 시간을 sturuct pTimeInfo에 넣어줌 
    //pTimeInfo는 

    printf("time_t:%11d\n",rawTime); 

    int year = pTimeInfo->tm_year +1900;//화살표 연산자는 접근이라는 의미로 활용됨.
    int month = pTimeInfo->tm_mon +1; //pTimeInfo는 포인터이기 때문에 원소에 접근하기 위해서는 ->를 사용한다. 
    int day = pTimeInfo->tm_mday;
    int hour = pTimeInfo->tm_hour;
    int min = pTimeInfo->tm_min;

    int sec = pTimeInfo->tm_sec;

    printf("timeInfo: %d , %d, %d\n",year,month,day);
    printf("timeInfo: %d\n",year,month,day);
    free(pTimeInfo);
    return 0;
}

// ////
// struct tm
// {
//     int tm_sec; // seconds after the min
//     int tm_min; // minutes after the hour 
//     int tm_hour;
//     int tm_mday;
//     int tm_mon;
//     int tm_year;
//     int tm_wday;
//     int tm_yday;
//     int tm_isdst;
// }