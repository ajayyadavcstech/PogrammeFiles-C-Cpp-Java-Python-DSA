#include <iostream>
using namespace std;
class base1
{
protected:
    int base1;

public:
    void setbase1(int a)
    {
        base1 = a;
    }
};

class base2
{
protected:
    int base2;

public:
    void setbase2(int a)
    {
        base2 = a;
    }
};
/*

base1       :   protected
base2       :   protected
setbase1()  :   public
setbase2()  :   public
show()      :   public

*/
class derived : public base1 , public  base2{
   public:
   void show()
   {
       cout<<"the value of base1 is "<<base1<<endl;
       cout<<"the value of base1 is "<<base2<<endl;
       cout<<"the sum of the value is "<<base1+base2<<endl;
   }
};
int main()
{
    derived ajay;
    ajay.setbase1(5);
    ajay.setbase2(6);
    ajay.show();

    return 0;
}