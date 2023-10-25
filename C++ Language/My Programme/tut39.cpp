#include <iostream>
using namespace std;
class base
{
protected:
    int a = 99;

private:
    int b;

public:
    int c;
};
/*for protected member;

                        private derivation      public derivation     protected derivation

private members          not possible             not possible           not possible 

public members             private                  public                protected

protected members          private                 protected              protected

*/
class derived : protected base
{
};
int main()
{
    base b;
    derived d;
    // cout<<d.a;  not work because it is protected in both base as well as derived class;

    return 0;
}