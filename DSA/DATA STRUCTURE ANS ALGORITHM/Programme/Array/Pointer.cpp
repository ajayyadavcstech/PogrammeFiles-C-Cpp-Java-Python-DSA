#include <iostream>
using namespace std;

class employee
{
public:
    int salary;
    string name;
    int id;
    employee(int salary, string name, int id)
    {
        this[0].salary = salary;
        this[0].id = id;
        this->name = name;
    }
};
int main()
{
    // double a= 3;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<sizeof(a)<<endl;

    // double *ptr=NULL;
    // cout<<&ptr<<endl;
    // cout<<ptr<<endl;
    // cout<<sizeof(ptr)<<endl;

    // ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<ptr[0]<<endl;
    // cout<<sizeof(ptr[0])<<endl;

    // int *pt=new int;
    // pt[0] = 5;
    // cout<<pt[0];

    employee e(3000,"ajju",10);
    cout<<sizeof(e)<<endl;
    employee *pt =new employee(4555,"ajay",9);
    cout<<sizeof(pt)<<endl;
    cout<<pt<<endl;
    cout<<sizeof(pt[0])<<endl;
    cout<<pt->id<<endl;

    employee &s =e ;
    cout<<s.id<<endl;
    s.id = 8;
    cout<<e.id<<endl;
    return 0;
}