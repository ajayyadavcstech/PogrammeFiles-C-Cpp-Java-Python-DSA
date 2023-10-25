#include<iostream>
using namespace std;
int count(int n,int m,int i,int j)
{
    if (i==n && j==m)
    {
        return 1;

    }
    if (i>n || j>m)
    {
        return 0;

    }
    return count(n,m,i+1,j)+count(n,m,i,j+1);
    
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<count(n,m,1,1);
    
    return 0;
}