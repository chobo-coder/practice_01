#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float float_value = 9.87654321f;
    cout<<"float:"<<sizeof(float)<<"bytes"<<endl;
    cout<<"float_value:"<<setprecision(4)<<float_value<<endl<<endl;
}


//변수앞에 ::를 입력 하면 전역 변수를 출력하게 됨