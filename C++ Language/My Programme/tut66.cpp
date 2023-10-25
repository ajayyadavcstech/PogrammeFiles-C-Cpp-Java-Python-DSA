#include<iostream>
using namespace std;
template <class t1=int , class t2=float , class t3=char>
class ajay{
    public:
    t1 a ;
    t2 b;
    t3 c;
    ajay(t1 x, t2 y ,t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main()
{
    ajay<> obj(4,4.4,'a');
    obj.display();

    cout<<endl;

    ajay<float ,char , int > ob1(4.4,'a',4);
    ob1.display();

    
    return 0;
}