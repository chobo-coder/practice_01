#include <iostream>
using namespace std;

class character {
public:
    character(){
        cout<<"character constructor"<<endl;
    };
};
class monster {
public:
    monster(){
        cout<<"monster constructor"<<endl;
    };
};

class monster_a:public character,monster {
public:
    monster_a(){
        cout<<"monster_a constructor"<<endl;
    };
};
int main(){
    monster_a mon; ///monster_a 는 monster, character를 상속 받았기 때문에 각각 print문을 실행하게 된다. 
    return 0;
}