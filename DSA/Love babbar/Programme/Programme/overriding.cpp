#include<iostream>
using namespace std;
class A{
    public:
    int a=4;
    int b=5;
   virtual void speack()=0;
};
class B:public A{
    public:
    int a=8;
     virtual void speack()
    {
        cout<<"barking "<<endl;
    }

};

int main()
{
    A *a=new B;
    cout<<a->a<<endl;
    a->speack();
    

    return 0;
}