#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
        cout<<"ggg"<<endl;
    }
    number(int num)
    {
        a = num;
    }
    //when no copy constructor found compiler supply own copy constructor.
    number(number &obj)
    {
        cout << "copy constructor called......!!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(45),z2;
    cout<<"value of x ";
    x.display();
    cout<<"value of y ";
    y.display();
    cout<<"value of z ";
    z.display();

    cout<<"value of z2 ";
    z2.display();

    number z1(z);//copy constructor invoked😉😊
    cout<<"value of z1 ";
    z1.display();

    z2=z;//copy constructor not invoked 😢😢
    cout<<"value of z2 ";
    z2.display();

    number z3=z;//copy constructor invoked😊😊
    cout<<"value of z3 ";
    z3.display();

    cout<<"value of z changes to ";
    z=number(5);
    z.display();

    cout<<"value of z1 ";
    z1.display();

    return 0;
}