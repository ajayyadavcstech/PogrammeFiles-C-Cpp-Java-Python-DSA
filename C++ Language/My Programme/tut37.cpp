#include <iostream>
using namespace std;
class employee //base class
{
public:
    int id;
    float salary;
    employee(int a)
    {
        id = a;
        salary = 45;
    }
    employee() {
        salary = 865;
    }
};
//derived class
// class {{derived -class name}} :  {{visibility - mode }} {{ base class name}}
// {
//     class memeber /memeber/method,etc;
// }
//private member are never inherited;
// default visibility mode is private;
class programmer : public employee
{
public:
    programmer(int inp_id)
    {
        id = inp_id;
        cout << inp_id << endl;
    }
    int languagecode = 9;
};
int main()
{
    employee c1(8), c2 = employee(9); // 2 ways for giving values
    cout << c1.salary << endl;
    cout << c2.salary << endl;
    programmer skillf(66);
    cout << skillf.id << endl;
    cout << skillf.languagecode << endl;

    cout << skillf.salary;//with programmer constructor the base construcror of salary also invoked

    return 0;
}