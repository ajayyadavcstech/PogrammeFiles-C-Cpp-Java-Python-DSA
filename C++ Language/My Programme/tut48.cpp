#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "base1 class constructor called " << endl;
    }
    void printdata()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "base2 class constructor called " << endl;
    }
    void printdata()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class derived : public base1, public base2 //bade1 then base2 then derived constructor called
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called " << endl;
    }
    void printdata()
    {
        base1 ::printdata();
        base2 ::printdata();

        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived ajay(1, 2, 3, 4);
    ajay.printdata();

    return 0;
}