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
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j <= i; j++)
        {
            cout<<fac(i)/(fac(j)*fac(i-j))<<" " ;
        }
        cout<<endl;
        
    }
    
    return 0;
}