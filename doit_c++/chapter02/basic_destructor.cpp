#include <iostream>
using namespace std;
class character {
public:
    character(){
        cout<< "character constructor"<<endl;
    };
    ~character() {
        cout<< "character_destructor"<<endl;
    };
};

class monster{
public:
    monster(){
        cout<<"monter constructor"<<endl;
    };
    ~monster(){
        cout<<"monster_destructor"<<endl;
    };

};
class monster_a:public character, monster{
public:
    monster_a(){
        cout<<"monster_a constructor"<<endl;
    };
    ~monster_a(){
        cout<<"monsetr_a destructor"<<endl;
    };

};

int main(){
    monster_a forest_monster;
    return 0;
}














