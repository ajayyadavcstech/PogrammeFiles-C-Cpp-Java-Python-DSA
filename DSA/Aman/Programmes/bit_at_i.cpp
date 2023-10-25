#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the int no and postion:"<<endl;
    cin>>n>>i;
    if((n & (1<<i))==0)
    cout<<0;
    else
    cout<<1;
    return 0; 
}