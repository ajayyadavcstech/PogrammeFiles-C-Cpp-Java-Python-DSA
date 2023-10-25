#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the no and position"<<endl;
    cin>>n>>i;
    cout<<(n&(~(1<<i)));
    return 0;
}