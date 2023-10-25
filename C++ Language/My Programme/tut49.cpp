#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};

*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i+b) -->RED Flag this will create problems because a will be initialized first
    Test(int i, int j) : a(i + b), b(j) //in this type of declaration a assigne first then second then third ......etc, irrespective of their order you write(mean not depend on assigned order)
    {

        cout << "constuctor executed" << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};
int main()
{
    Test obj(1, 2);

    return 0;
}