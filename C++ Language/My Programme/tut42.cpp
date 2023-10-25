#include <iostream>
#include <math.h>
using namespace std;
class simplecal
{
protected:
    int a, b, sum, sub, mul;
    float div;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
        sum = a + b;
        sub = a - b;
        mul = a * b;
        div = float(a) / b; 
    }
    void display1()
    {
        cout << "sum of a and b is " << sum << endl;
        cout << "sub of a and b is " << sub << endl;
        cout << "mul of a and b is " << mul << endl;
        cout << "div of a and b is " << div << endl;
    }
};
class scientific_calculator
{
protected:
    int a, ans;

public:
    void setdata(int x)
    {
        a = x;
        ans = sin(a) * sin(a) + cos(a) * cos(a);
    }
    void display2()
    {
        cout << "the value of sin(a)*sin(a)+cos(a)*cos(a) is " << ans << endl;
                cout<<a<<endl;
        cout<<"the value of sin(a) "<<sin(a)<<endl;
        cout<<"the value of exp(a) "<<exp(a)<<endl;
        cout<<"the value of pow(a) "<<pow(a,2)<<endl;

    }
};
class hybridcal : public simplecal, public scientific_calculator
{
public:
    void display()
    {
        display1();
        display2();
    }
};
int main()
{
    hybridcal ajay;
    ajay.getdata( 6,5);
    ajay.setdata(8);
    ajay.display();

    return 0;
}