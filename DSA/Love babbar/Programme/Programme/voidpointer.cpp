#include<iostream>
using namespace std;


int main()
{
    int a=34;
    void *p=&a;
    cout<<*((char*)p);   

    return 0;
}