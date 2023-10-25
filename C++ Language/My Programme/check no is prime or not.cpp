#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
           count=1;
           break;
        }
    }
    if(count==0)
    {
        cout<<"no is prime";
    }
    else
        cout<<"no is not a prime";
}
