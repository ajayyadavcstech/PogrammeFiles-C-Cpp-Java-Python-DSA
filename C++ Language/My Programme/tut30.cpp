#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int , int );
    void print( )
    {
        cout << " complex no is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x,int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c1(4,5);//implicite call
    complex c2=complex(54,89); // explicite call
    c1.print();
    c2.print();

    return 0;
}