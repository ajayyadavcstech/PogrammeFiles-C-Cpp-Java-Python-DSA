#include<iostream>
using namespace std;
int fac(int a)
{
    int fac=1;
    for(int i=2;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int ncr(int n,int r)
{
    return fac(n)/(fac(r)*fac(n-r));
}

int main()
{
    int n;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
            cout<<ncr(i-1,j-1)<<" ";
       }
       cout<<endl;
   }
}
