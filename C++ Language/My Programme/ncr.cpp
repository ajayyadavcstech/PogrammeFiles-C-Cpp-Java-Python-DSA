#include<iostream>
using namespace std;
int fac(int a)
{
    int fac=1;
    for(int i=2;i<=a;i++)
    {
        fac=fac*i;
    }
   return(fac);
}
int main()
{
    int n,r,ncr;
    cin>>n>>r;
    ncr=fac(n)/(fac(r)*fac(n-r));
    cout<<ncr;
}

