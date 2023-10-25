#include<iostream>
using namespace std;
class sum;
class display{
    public:
    void sum1(sum &n);
    void dis(sum n);
};
class sum{
    int a,b,su;
    public:
 friend display;


    void setdata(int a, int b)

    {
        this->a=a;
        this->b=b;

    }
};
 void display :: sum1(sum &n)
    {
       n.su=n.a+n.b;
    }
    void display :: dis(sum n)
    {
      cout<<n.su;
    }
int main()
{
    sum obj;
    obj.setdata(34,5);
    display obj2;
    obj2.sum1(obj);
    obj2.dis(obj);

     
    return 0;
}