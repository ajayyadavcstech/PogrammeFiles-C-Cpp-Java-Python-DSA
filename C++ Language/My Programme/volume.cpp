#include<iostream>
using namespace std;
class complex {
    float real,img;
    public:
    complex(float x,float y): real(x),img(y)
    {}
    complex(){}
    void display(){
        cout<<"complex no is "<<real<<" + "<<img<<"i"<<endl;
    }
    void sum(complex x,complex y)
    {
        real=x.real+y.real;
        img=x.img+y.img;
        cout<<"sum of complex no is "<<real<<" + "<<img<<"i"<<endl;
    }
     void difference(complex x,complex y)
    {
        real=x.real-y.real;
        img=x.img-y.img;
        cout<<"difference of complex no is "<<real<<" + "<<img<<"i"<<endl;
    } void multiplication(complex x,complex y)
    {
        real=x.real*y.real-x.img*y.img; 
        img=x.real*y.img+y.real*x.img;
        cout<<"multiplication of complex no is "<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1(3,4),c2(2,3),c3;
    c1.display();
    c2.display();
    c3.sum(c1,c2);
    c3.difference(c1,c2);
    c3.multiplication(c1,c2);
    
    return 0;
}