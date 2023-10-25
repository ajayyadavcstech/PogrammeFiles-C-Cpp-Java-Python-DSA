#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int n1=n;
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum+=r*r*r;
        n/=10;
    }
    if(sum==n1)
    {
        cout<<"Armastrong no";

    }
    else
    cout<<"Not a Armastrong";
    return 0;
}