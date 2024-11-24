#include <iostream>
using namespace std;
void swap(int &ref_a, int &ref_b)
{
    cout<<"[swa func] befpre swap,ref_a:"<<ref_a<<"ref_b:"<<ref_b<<endl;
    int temp =ref_a;
    ref_a =ref_b;
    ref_b =temp;
}

int main()
{
    int a =5;
    int b =10;
    cout<< "[main] before swap,a:"<<a <<"b:"<<b <<endl <<endl;
    swap(a,b);
    cout<< "[main] after swap,a:"<<a <<"b:"<<b <<endl <<endl;
    return 0;
}