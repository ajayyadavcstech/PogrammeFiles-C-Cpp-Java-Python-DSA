#include<iostream>
using namespace std;
int DecimalToOctal(int n)
{
    int a=1;
    int ans=0;
    while (n>=a)
    {
        a*=8;
    }
    while (a>0)
    {
        int lastdigit=n/a;
        ans=ans*10+lastdigit;
        n-=a*lastdigit;
        a/=8;
        

    }
    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<DecimalToOctal(n);
    return 0;
}