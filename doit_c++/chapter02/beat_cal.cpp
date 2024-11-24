//a&&b ->and
//a||b ->or
//비트 연산자 
//A&B
//A|B
//A^B-> XOR
//A>>B 오른쪽 SHIFT
//A<<B 왼쪽 SHIFT

//
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a = 13;
    int b = 27;
    int c =a&b;
    int d = a|b;
    int e = a^b;
    int f = a<<1;
    int g = a>>1;

    cout<<"a= "<<bitset<8>(a) <<":"<<a<<endl;
    cout<<"b= "<<bitset<8>(b) <<":"<<b<<endl;
    cout<<"c= "<<bitset<8>(c) <<":"<<c<<endl;
    cout<<"d= "<<bitset<8>(d) <<":"<<d<<endl;
    cout<<"e= "<<bitset<8>(e) <<":"<<e<<endl;
    cout<<"f= "<<bitset<8>(f) <<":"<<f<<endl;
    cout<<"g= "<<bitset<8>(g) <<":"<<g<<endl;
}