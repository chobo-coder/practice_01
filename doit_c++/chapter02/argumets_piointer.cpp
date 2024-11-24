#include <iostream>
using namespace std;
void change_neg(int *val)
{
    if (*val>0)
    {
        *val = -(*val);
    }

}

int main()
{
    int a=3, b=-3;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    change_neg(&a);
    change_neg(&b);
    cout<<"a.neg:"<<a<<endl;
    cout<<"b.neg:"<<b<<endl;
}