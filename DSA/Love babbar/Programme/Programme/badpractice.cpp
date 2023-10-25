#include<iostream>
using namespace std;

int& fun(int a)
{
    a++;
    cout<<"inside fun "<<a<<endl;
    return a;
}
int* fun2(int *p)
{
    *p++;
    return p;
}
int main()
{
    // int a=5;
    // int &b=fun(a); ///bad practice
    // cout<<b<<endl;

    int a=5;
    int *p=&a;
    int *q=fun2(p);
    cout<<*q;

    return 0;
}