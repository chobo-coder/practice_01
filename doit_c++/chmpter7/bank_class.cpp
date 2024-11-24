#include <iostream>
using namespace std;

class bank {
private:
    int safe;  //금고 /// 상수들은 공유하면 암됨. python의 self와 같음.
public:
    bank();//함수들은 공유해도 됨 
    void use_counter(int _in, int _out); //입출금 창구 함수
};

void bank::use_counter(int _in, int _out){
    safe += _in;
    safe -= _out;

    cout<<"in : "<< _in <<endl;
    cout<<"out: "<< _out <<endl;
    cout<<"safe:"<<safe<< endl;
    cout<< endl;
}
bank::bank(){
    safe = 1000;
    cout<<"initial:"<<safe<<endl;
    cout<<endl;
}
int main(){
    bank my_bank;
    my_bank.use_counter(0,20);
    my_bank.use_counter(50,0);
    my_bank.use_counter(100,50);
    //cout<<"safe"<<my_bank.safe; 이렇게는 접근 못함
    return 0;
    
}