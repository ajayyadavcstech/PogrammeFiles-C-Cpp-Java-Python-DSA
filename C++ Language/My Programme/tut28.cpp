#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
friend void add(x ,y );

    void getdata(int a1)
    {
        data=a1;
    }
};

class y{
    int data;
    public:
friend void add(x ,y );

    void getdata(int a1)
    {
        data=a1;
    }
};
void add(x a1,y a2)
{
    cout<<a1.data+a2.data;
}
int main()
{
    x b;
    b.getdata(1); 

    y c;
    c.getdata(55); 

    add(b,c);

    return 0;
}