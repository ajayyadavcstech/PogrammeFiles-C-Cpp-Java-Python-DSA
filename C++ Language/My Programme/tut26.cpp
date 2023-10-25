#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex  setdatabysum(complex o1, complex o2);

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
complex  setdatabysum(complex o1, complex o2)//friend function
{
    complex o3;
    o3.setdata(o1.a + o2.a, o1.b + o2.b);

    return (o3);
}
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.displaydata();

    c2.setdata(3, 4);
    c2.displaydata();

    c3 = setdatabysum(c1, c2);
    c3.displaydata();

    return 0;
}
// not in the scope of a class
//cannot caled from object c1.setdatabysum() is wrong
//it just like normal function that have access of sum private data
//it cannot access the members directly by there name