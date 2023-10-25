#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0,d;

    cin>>n;
    d=n;
    while(n!=0)
    {
        int r;
        r=n%10;
        sum=sum+pow(r,3);
        n=n/10;
    }
    if(d==sum)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not a armstrong";
    }
}
