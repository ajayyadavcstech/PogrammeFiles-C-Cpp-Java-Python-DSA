#include <iostream>
using namespace std;
class student{
    public:
    int a;
    int b;
    int c;
};
struct st
{
    int a;
    int b;
    char c;
};
void fun(student s1)
{
    cout << "inside fun()" << endl;
    cout << &s1.a << endl;
    cout << &s1 << endl;
    s1.a=7;
}
void fun(st s1)
{
    cout << "inside fun()" << endl;
    cout << &s1.a << endl;
    cout << &s1 << endl;
    s1.a=7;
}

int main()
{
    student s1;
    s1.a=5;
    cout<<s1.a<<endl;
    cout << &s1.a << endl;
    cout << &s1 << endl;
    fun(s1);
    cout<<s1.a<<endl;


    return 0;
}