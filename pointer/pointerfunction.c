#include <stdio.h>

void chage(int*,int*);

int main(void)
{
    int i=77, j=33;
    prinft("i =%d, j=%d\n",i,j);
    chage(&i,&j);//chage 함수에는 포인터 인수를 받음 /// 주소값을 input으로 입력해 주어야함.. 
    
    printf("i=%d,j=%d\n",i,j);
    return 0;
}

void change(int *i,int *j)
{
    int temp;
    temp =*i;
    *i =*j;
    *j = temp;
}   