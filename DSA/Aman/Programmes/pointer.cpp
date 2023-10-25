#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int swap=*b;
    *b=*a;
    *a=swap;
}
void printaddress(int a)
{
    cout<<&a<<endl;
}
void printaddress(int* a)
{
    cout<<&a<<endl;
}
void printreference(int& a)
{
    cout<<&a<<endl;
}

int main()
{
    int a=5,b=6;
    int *p1=&a,*p2=&b;
    swap(p1,p2);
    cout<<a<<" "<<b<<endl;
    int c=7,*d=&c,**e=&d;
    cout<<c<<" "<<d<<" "<<e<<endl;
    int *f=d;
    cout<<&c<<" "<<d<< " "<<f<<endl;
    int x=0;
    cout<<" address of x before function call "<<&x<<endl;
    printaddress(x);
    int *ptrr=&x;
    cout<<"address of x and ptrr is "<<&x<<" "<<&ptrr<<endl;
    printaddress(ptrr);
    printaddress(&x);
    cout<<"address of reference is "<<endl;
    printreference(x);
    
    return 0;
}