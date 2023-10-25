#include<iostream>
using namespace std;
class base{
    public:
int var_base;
void display()
{
    cout<<"display base class variable var1 "<<var_base<<endl;
}
};                                                                                
class derived : public base {
    public:                                                                                                                                    
int var_derived;
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
    base_class_pointer= &obj_derived; //pointing to derived class;
    base_class_pointer->var_base=55;
    // base_class_pointer->var_derived=65;// will throw an error;
    base_class_pointer->display(); // display function of base class run
    
     derived * derived_class_pointer;
     derived_class_pointer=&obj_derived;
     derived_class_pointer->var_derived=77;
     derived_class_pointer->display();

    return 0;
}