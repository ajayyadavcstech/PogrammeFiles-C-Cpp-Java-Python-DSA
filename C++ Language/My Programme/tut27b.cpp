#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumofrealpart(complex o1, complex o2);
    int sumofcomplexpart(complex o1, complex o2);
};
class complex
{
    int a, b;
friend class calculator;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void displaydata()
    {
        cout << "complex no is " << a << " + "
             << b << "i" << endl;
    }
};
int calculator::sumofrealpart(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sumofcomplexpart(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex c, d;
    c.setdata(1, 2);
    c.displaydata();

    d.setdata(3, 4);
    d.displaydata();

    calculator real, comp;
    int suma, sumb;
    suma = real.sumofrealpart(c, d);
    cout << suma<<endl;

    sumb = comp.sumofcomplexpart(c, d);
    cout << sumb;
    return 0;
}