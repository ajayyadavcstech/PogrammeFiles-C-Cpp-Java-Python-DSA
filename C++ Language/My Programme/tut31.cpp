#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int a1, int b1)//constructor overloading;
    {
        a = a1;
        b = b1;
    }
     complex(int a1)//constructor overloading;
    {
        a = a1;
        b = 0;
    }
     complex()//constructor overloading;
    {
        a = 0;
        b = 0;
    }
    void displaydata()
    {
        cout << "complex no is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(1,2);
    c1.displaydata();

    complex c2(3);
    c2.displaydata();

   complex c3;
   c3.displaydata();
    return 0;
}