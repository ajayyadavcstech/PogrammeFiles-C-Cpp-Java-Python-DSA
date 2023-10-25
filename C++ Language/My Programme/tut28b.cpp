#include <iostream>
using namespace std;
class c2;
class c1
{
    int data;

public:
    friend void swap(c1 &, c2 &);

    void setdata(int a)
    {
        data = a;
    }
    void dispaydata()
    {
        cout << data << endl;
    }
};
class c2
{
    int data;

public:
    friend void swap(c1 &, c2 &);

    void setdata(int a)
    {
        data = a;
    }
    void dispaydata()
    {
        cout << data << endl;
    }
};
void swap(c1 &a, c2 &b)
{
    a.data = a.data + b.data;
    b.data = a.data - b.data;
    a.data = a.data - b.data;
}
int main()
{
    c1 a;
    c2 b;
    a.setdata(1);
    b.setdata(8);

    a.dispaydata();
    b.dispaydata();

    swap(a, b);

    a.dispaydata();
    b.dispaydata();

    return 0;
}