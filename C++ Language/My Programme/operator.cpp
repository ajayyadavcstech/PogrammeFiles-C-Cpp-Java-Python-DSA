#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
   friend complex operator+(complex a,complex b);
    
    complex(float a,float b): real(a),img(b)
    {}
    complex(){}
    void display()
    {
        cout<<"The complex no is : "<<real<<" +"<<img<<"i"<<endl;
    }
};
    complex operator+(complex a,complex c)
    {
       complex b;
       b.real=c.real+a.real;
       b.img=c.img+a.img;
       return b;

    }
int main()
{
    complex c1(4,5),c2(6,7),c3;
    c3=c1+c2;
    c3.display();
    
    return 0;
}