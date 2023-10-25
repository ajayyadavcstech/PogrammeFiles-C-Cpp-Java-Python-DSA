#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void displaydata()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
};
int main()
{
    complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex; // using new keyword

    (*ptr).setdata(3, 4);
    (*ptr).displaydata();

    // arrow operator same as  * operator used for derefrencing;

    cout << "output using arrow operator" << endl;
    complex *pt = new complex;
    pt->setdata(77, 88);
    pt->displaydata();

    //array of a object;

    cout << "using array of an object " << endl;

    complex *p = new complex[3];
    p->setdata(6, 7);
    p->displaydata();
    
    (p+1)->setdata(8, 9);
    (p+1)->displaydata();

    (p+2)->setdata(10, 11);
    (p+2)->displaydata();

    return 0;
}