#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<n-i+1<<" ";
        }
        for(int j=1;j<n-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}