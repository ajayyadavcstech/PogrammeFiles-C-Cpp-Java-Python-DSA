#include <iostream>
using namespace std;
class complex;
class cal
{
    int a;
    int b;

public:
    void sum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.a = o2.a + o1.a;
    o3.b = o2.b + o1.b;
    return o3;
}
class complex
{
    int a;
    int b;

public:
    void setno(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend void cal ::sum(complex, complex);
    friend complex sumcomplex(complex, complex);
    void getno()
    {
        cout << "complex no is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setno(3, 4);
    c1.getno();
    c2.setno(5, 6);
    c1.getno();
    c3 = sumcomplex(c1, c2);
    c3.getno();

    return 0;
}