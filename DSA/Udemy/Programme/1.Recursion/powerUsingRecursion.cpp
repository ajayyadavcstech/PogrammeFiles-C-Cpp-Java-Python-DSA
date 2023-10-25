#include<iostream>
using namespace std;
int power(int n,int m)
{
    if (m==0)
    {
        return 1;
    }
    return n*power(n,m-1);// Time complexicity depend on m:- O(m)
    
}
//here another method to solve same problem usig less time
int power1(int n,int m)
{
    if (m==0)
    {
        return 1;
    }
    if(m%2==0)
    return power1(n*n,m/2);
    else
    return n*power1(n*n,m/2);    
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<power1(n,m);
    
    return 0;
}