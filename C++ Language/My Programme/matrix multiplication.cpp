#include<iostream>
using namespace std;
int main()
{
    int n,m,p;
    cin>>n>>m>>p;
    int arr1[n][m],arr2[m][p],arr[n][p];
    cout<<"enter first matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"enter second matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            arr[i][j]=0;
        }
    }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<p;j++)
       {
           for(int k=0;k<m;k++)
           {
               arr[i][j]=arr[i][j]+arr1[i][k]*arr2[k][j];
           }
       }
   }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
