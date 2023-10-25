#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the size of 2d array"<<endl;
    cin>>n>>m;
    int a[n][m];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==k)
            {
              cout<<"Element found ! "<<i<<" "<<j;
              return 0;
            }
        }
        
    }
    cout<<"Element not found !";
    
    
    return 0;
}