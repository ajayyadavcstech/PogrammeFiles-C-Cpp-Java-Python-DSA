#include<iostream>
using namespace std;
class complex{
  int real;
  int img;
  public:
  complex(int a ,int b)
{
    real=a;
    img=b;

}
  complex()
{

}
void display(){
    cout<<"The complex no is "<< real<<" + "<<img<<"i"<<endl;
}
void add(complex a, complex b)
{

    real=a.real+b.real;
    img=a.img+b.img;
}
complex operator+(complex a)//operator overloading
{
   complex c;
   c.real=this->real+a.real;
   c.img=this->img+a.img;
}
};
int main()
{
    complex c1(4,5);
    complex c2(5,6);
    complex c3;
    // c3.add(c1,c2);
    // c3.display();

    c3=c1+c2;
    c3.display();
    return 0;
}