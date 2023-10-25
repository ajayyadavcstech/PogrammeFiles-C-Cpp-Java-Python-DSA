#include<iostream>
using namespace std;
class base{
    public:
int var_base=1;
virtual void display()
{
    cout<<"display base class variable var1 "<<var_base<<endl;
}
};
class derived : public base {
    public:
int var_derived=2;
void display() 
{
    cout<<"display base class variable var1 "<<var_base<<endl;
    cout<<"display derived class variable var1 "<<var_derived <<endl;
}
};
int main()
{
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;

    base_class_pointer=&obj_derived;

    base_class_pointer->display();

    return 0;
}