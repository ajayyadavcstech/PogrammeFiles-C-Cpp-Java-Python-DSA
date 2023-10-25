#include<iostream>
using namespace std;
int settail(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return settail(n-1) + settail(n-2); 
    
}
int main()
{
    int n;
    cin>>n;
    cout<<settail(n);
    
    return 0;
}