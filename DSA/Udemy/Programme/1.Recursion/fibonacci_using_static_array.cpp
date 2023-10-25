#include <iostream>
using namespace std;
int a[15];
int fibo(int n)
{
    if (a[n]==-1)
    {
        if (n==1 || n==0)
        {
            a[n]=n;
            return a[n];
        }
        a[n]=fibo(n-1)+fibo(n-2);
        return a[n];
        
    }
    return a[n];

    
}
int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < 15; i++)
    {
        a[i] = -1;
    }
    cout<<fibo(n);

    return 0;
}