#include<iostream>
using namespace std;
int fib(int n)
{
    int t0=0,t1=1,t;
    for (int i = 2; i <=n; i++) //using iteration prints only nth term of fibo
    {
        t=t0+t1;
        t0=t1;
        t1=t;
    }
    return t;
}
void fib1(int n)
{
    int t0=0,t1=1,t;
    for (int i = 1; i <=n; i++)//using iteration prints all fibo term
    {
        cout<<t1<<" ";
        t=t0+t1;
        t0=t1;
        t1=t;
    }
    
}
int fib2(int n)
{
    if(n==0 || n==1)
    return n;
    return fib2(n-1)+fib2(n-2);//using recursion gives nth fibo term
}
int main()
{
    int n;
    cin>>n;
    cout<<fib2(n);
    
    return 0;
}