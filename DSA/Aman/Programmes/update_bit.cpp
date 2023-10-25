#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n and i"<<endl;
    cin>>n>>i;
    cout<<(n|(1<<i));
    return 0;
}