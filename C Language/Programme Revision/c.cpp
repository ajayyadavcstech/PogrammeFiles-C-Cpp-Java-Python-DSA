#include <iostream>
using namespace std;
#define pi 3.14
struct emp
{
    int i = 56;
    char e;
    int j = 7;
    char f;
};
void fun(emp &e1)
{
    cout << "inside fun" << endl;
    cout << &e1 << endl;
    cout << &e1.i << endl;
    cout << &e1.j << endl;
    e1.j=5;
    cout<<e1.j<<endl;
}
int main()
{
    typedef struct emp employee;
    employee e;
    cout << e.i << endl;
    cout << e.j << endl;
    cout << sizeof(emp) << endl;
    cout << &e << endl;
    cout << &e.i << endl;
    cout << &e.j << endl;
    fun(e);
    cout<<e.j<<endl;

    return 0;
}