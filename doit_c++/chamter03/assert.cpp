#include <iostream>
#include <cassert>

using namespace std;
void print_number (int *_pt_int)
{
    assert(_pt_int != NULL);//True 가 아니면 실행을 종료하고 error 메시지 출력함.
    cout << *_pt_int <<endl;
}

int main()
{
    int a =100;
    int *b = NULL;
    int *c = NULL;
    b = &a;
    print_number(b);
    print_number(c);
    return 0;
}