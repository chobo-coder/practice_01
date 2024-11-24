#include <iostream>
using namespace std;
struct Person
{
    std::string name;
    int age;
    float height;
    float weight;

};

void check_age(Person *_adult, int _count)
{
    for (int i=0;i<_count;i++)
    {
        if (_adult[i].age >=25)
        {
            cout<<"name:"<<_adult[i].name<<endl;
            cout<<"age:"<<_adult[i].age<<endl;
            cout<<"height:"<<_adult[i].height<<endl;
            cout<<"weight:"<<_adult[i].weight<<endl;
        }

    }
}
int main()
{
    Person adult[3] =
    {
        {"a",24,180,69},
        {"b",26,150,39},
        {"c",22,180,49},
    };
    check_age(adult,3);
}