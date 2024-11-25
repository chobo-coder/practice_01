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
    monster_a(int x, int y) : location{x,y} {
        cout<< "monster_a constructor with variable";
    };
    void show_location(){
        cout<<"location<"<<location[0]<<","<<location[1]<<">"<<endl;
    };

private:
    int location[2];

};




int main(){
    monster_a forest_monster; ///monster_a 는 monster, character를 상속 받았기 때문에 각각 print문을 실행하게 된다. 
    forest_monster.show_location(); //<<쓰레기 값이 출력 되게 됨 
    monster_a wood_monster(10,25); 
    wood_monster.show_location();//<<넣어준 값이 출력 되게 됨.


    return 0;
}
