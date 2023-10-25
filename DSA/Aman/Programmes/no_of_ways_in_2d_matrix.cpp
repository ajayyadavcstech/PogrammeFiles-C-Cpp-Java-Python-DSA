#include<iostream>
using namespace std;
int ways(int n,int m)
{
    if (n==1 || m==1)
    {
        return 1;
    }
    return ways(n-1,m)+ways(n,m-1);
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<ways(n,m);
    
    return 0;
}