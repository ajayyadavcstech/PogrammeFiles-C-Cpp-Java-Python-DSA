#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    if (n==0)
    {
        cout<<"1";
        return 0;
    }
    
    int a=~n;
    int count=0;
    while(n!=0)
    {
        count++;
        n=n>>1;
    }
    int mask=0;
    while (count!=0)
    {
        mask=mask<<1;
        mask=mask|1;
        count--;
    }
    cout<<(a&mask);
    

    return 0;
}