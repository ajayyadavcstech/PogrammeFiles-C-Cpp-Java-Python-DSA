#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the size of an array"<<endl;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j<m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Enter the element to search"<<endl;
    int k;
    cin>>k;
    int i=0,j=m-1;
    while ((i>=0 && i<n)  and (j>=0 && j<m))
    {
       if(k==a[i][j])
       {
           cout<<"found"<<endl;
           cout<<i+1<<" "<<j+1;
           return 0;
       }
      else if (k>a[i][j])
       {
           i++;
       }
       else
       j--;

       
    }
    cout<<"Not found";
    
    
    return 0;
}