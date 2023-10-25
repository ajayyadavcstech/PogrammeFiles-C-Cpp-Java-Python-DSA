#include<iostream>
using namespace std;
class base1
{
   public:
   void greet()
   {
       cout<<"how are you?"<<endl;
   }
};
class base2
{
   public:
   void greet()//ambiguity
   {
       cout<<"kaide ho?"<<endl;
   }
};
class derived : public base1 , public base2
{
    public :
     void greet()
     {
        base2::greet();
     }
};
class b{
    public:
    void say()
    {
        cout<<"hello world"<<endl;
    }
};
class d : public b // d's new say() method will ovrridw vase class say() method;
{
    public:
    void say()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    // //ambiguity 1
    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived obj3;
    // obj3.greet();
    d obj;
    obj.say();
    return 0;
}