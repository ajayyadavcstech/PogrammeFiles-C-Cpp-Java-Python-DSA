#include<iostream>
using namespace std;
bool issafe(int **a,int x,int y,int n)
{
    if (a[x][y]==1 && x<=n && y<=n)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int **a,int n,int x,int y,int **ans)
{
    if (x==n || y==n)
    {
        ans[x][y]=1;
        return true;

    }
    if (issafe(a,x,y,n))
    {
        ans[x][y]=1;
        if (ratinmaze(a,n,x,y-1,ans))
        {
            return true;
        }
        if (ratinmaze(a,n,x-1,y,ans))
        {
            return true;
        }
        ans[x][y]=0;
        return false;
        
        
         
    }
    return false;
    
    
}
int main()
{
    int n;
    cin>>n;
    int **a=new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=new int [n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
     int **ans=new int *[n];
    for (int i = 0; i < n; i++)
    {
        ans[i]=new int [n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           a[i][j]=0;
        }
        
    }
    if (ratinmaze(a,1,1,n,ans))
    {
          for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
        
    }
  
    
    
    
    return 0;
}