#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
};
class B{
    public:
    int a=6;
    int b;
};
class C:public A ,public B{
    public:
    void fun(){
       A :: a=4;
       
    }
};

int main()
{
    C a;
    a.fun();
    cout<<a.A::a<<endl;
    cout<<a.B::a<<endl;
    

    return 0;
}