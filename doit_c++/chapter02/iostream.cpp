#include <iostream>
//using namespace std -> 이것을 사용하면 std:: 를 생략할 수 있음.
int main()
{
    int i,j;
    std::cout << "Enter num_1:";//문자열 출력 
    std::cin >>i; //사용자에게 정수를 입력 받아 i에 저장

    std::cout<<"Enter num_2:"; //문자열 출력
    std::cin>>j;

    std::cout <<"num_1 + num2 =" <<i+j << std::endl; //두수의 합 출력 

    return 0;
}
