#include<iostream>
using namespace std;

int main()
{
    int n,check=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
    {
        check=1;
        break;
    }
    }
    if(check==0)
    cout <<"no is prime"<<endl;
    else
    cout<<"not a prime"<<endl;
    return 0;
}