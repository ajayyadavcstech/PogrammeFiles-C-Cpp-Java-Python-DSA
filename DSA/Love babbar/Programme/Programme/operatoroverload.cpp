#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    void operator+(A &b)
    {
       cout<<"output "<<this->a-b.a<<endl; 
    }
};

int main()
{
    A a;
    A b;
    a.a=4;
    b.a=7;  
    a+b;


    return 0;
}