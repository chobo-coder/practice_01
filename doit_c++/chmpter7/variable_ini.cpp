#include <iostream>
using namespace std;

class monster_b : public monster, character {
public:
    monster_b(player &attack_target)  //class에서 선언해주는 방식
    :monster_type("normal"),  //이하 이니셜을 해주는 것
    location{0,0},
    unique_id(++total_count),
    target(attack_target){
    difficult_level =10;
    quiz =new char[1024];
    }

private:
    string monster_type;
    int location[2];
    static int total_count;
    const int unique_id;
    player &target; //reference
    int difficult_level;
    char *quiz;

};