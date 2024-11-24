#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int b= 5; 
    int result;
    result =a>b ? a : b; // 조건식 True 일 떄 a, 조건식 False 일 때, b
    cout << "result = "<<result<<endl;

    return 0;
}