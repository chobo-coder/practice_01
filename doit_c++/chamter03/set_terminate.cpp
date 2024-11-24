#include <iostream>
#include <stdlib.h>

using namespace std;

void myterminate()
{
    cout << "myterminate called"<<endl;
    exit(-1); //프로그램 비정상 종료 
}

int main(void)
{
    set_terminate(myterminate);//강제 종료하기 전에 해당 문구를 실행하고 종료를 함 
    throw 1; //catch 문을 찾기 전에 강제 종료 됩니다. 
    return 0;
}