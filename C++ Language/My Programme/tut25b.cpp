#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    void setdata(int a1 , int b1)
    {
        a=a1;
        b=b1;
    }
    void display()
    {
        cout<<"the value of comlex no. is "<<a<<"+"<<b<<"i"<<endl;
    }
    void setdatabysum(complex o1,complex o2){
          a=o1.a+o2.a;
          b=o1.b+o2.b;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.display();

    c2.setdata(3,4);
    c2.display();

    c3.setdatabysum(c1,c2);
    c3.display();


    
    return 0;
}