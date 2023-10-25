#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);//recursion calling function itself to make problen smaller
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}