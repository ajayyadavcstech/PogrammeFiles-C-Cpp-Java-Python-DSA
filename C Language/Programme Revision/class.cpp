#include <iostream>
using namespace std;
class car
{
  
public:
    int a = 4;
    int b = 7;
    int *pt = new int;
    
    void value(int a)
    {
        *pt=a;
    }
    void fun()
    {
        int a;
        cout << a;
    }
    void fun1(int a);
};
void car ::fun1(int a)
{
}

int main()
{
    // car hy;
    // hy.a=4;
    // cout<<hy.a<<endl;
    // cout<<hy.b<<endl;
    // cout<<sizeof(hy)<<endl;
    // cout<<&hy<<endl;
    // cout<<&hy.a<<endl;
    // cout<<&hy.b<<endl;

    // car* h=new car;
    // (*h).a=11;
    // cout<<"dynamic "<<endl;
    // cout<<&h<<endl;
    // cout<<h<<endl;
    // cout<<&h->a<<endl;
    // cout<<&h->b<<endl;
    // cout<<&hy.b<<endl;
    // cout<<sizeof(hy)<<endl;

    // car *h = new car;
    // cout<<sizeof(h)<<endl;
    // cout << &h << endl;
    // cout << h << endl;
    // cout<<&(*h).a<<endl;
    // cout<<&h->b<<endl;
    // cout<<&h->pt<<endl;
    // cout<<h->pt<<endl;
    // cout<<&h->pt[0]<<endl;
    // // cout<<&h->fun1<<endl;

    car * h=new car;
    cout<<h->a<<endl;
    cout<<h->b<<endl;
    h->value(02);
    cout<<*(h->pt)<<endl;
    cout<<h->pt[0]<<endl;

    return 0;
}