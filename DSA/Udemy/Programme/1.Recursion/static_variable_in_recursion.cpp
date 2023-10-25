#include<iostream>
using namespace std;
  int x=0;

int fun(int n)
{
    if (n>0)
    {
        x++;
        cout<<x<<endl;
        int sum = x+fun(n-1);
    }
    return 0;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
    
    return 0;
}