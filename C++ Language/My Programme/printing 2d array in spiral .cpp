#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rs=0;
    int re=n-1;
    int cs=0;
    int ce=m-1;
    while(rs<=re && cs<=ce)
    {
        for(int i=cs;i<=ce;i++)
        {
            cout<<arr[rs][i]<<" ";
        }
        rs++;
        for(int i=rs;i<=re;i++)
        {
            cout<<arr[i][ce]<<" ";
        }
        ce--;
        for(int i=ce;i>=cs;i--)
        {
            cout<<arr[re][i]<<" ";
        }
        re--;
        for(int i=re;i>=rs;i--)
        {
            cout<<arr[i][cs]<<" ";
        }
        cs++;
        cout<<endl;
    }
}
