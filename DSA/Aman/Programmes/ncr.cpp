#include<iostream>
using namespace std;
int fac(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    return n*fac(n-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<fac(n)/(fac(r)*fac(n-r));
    return 0;
}