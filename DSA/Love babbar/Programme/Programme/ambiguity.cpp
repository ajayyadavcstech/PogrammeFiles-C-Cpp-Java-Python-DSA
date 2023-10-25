#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
};
class B:virtual public A{

};
class C:virtual public A{

};
class D: public B,public C{
    public:
    void fun(){
       a=4;
    }

};

int main()
{
    D a;
    a.fun();
    cout<<a.a;
    

    return 0;
}