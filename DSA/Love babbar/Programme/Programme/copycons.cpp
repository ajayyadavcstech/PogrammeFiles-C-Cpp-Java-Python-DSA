#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
    static int time;
    Hero(int a, char b)
    {
        health = a;
        level = b;
    }
    //copy constructor
    static void fun2()
    {
        time = 3;
    }
    void fun1()
    {
        health = 3;
    }
    void fun() const
    {
        // fun1();
    }
    Hero(Hero &h)
    {
        cout << "copy constructor" << endl;
        this->health = h.health;
        this->level = h.level;
    }
};
int Hero ::time = 4;

int main()
{
    Hero ajay(4, 'a');
    Hero rames(5, 'b');
    cout << ajay.health << endl;
    cout << rames.health << endl;
    ajay = rames;
    cout << endl;
    cout << ajay.health << endl;
    cout << rames.health << endl;
    cout << Hero ::time << endl;
    cout << ajay.time << endl;
    Hero ::fun2();
    cout << Hero ::time << endl;

    return 0;
}