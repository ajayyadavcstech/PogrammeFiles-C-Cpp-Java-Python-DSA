#include<iostream>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int **arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[m];  //*(arr+i)
    }
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>*(*(arr+i)+j);    //*(*(arr+i)+j) or arr[i][j]
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    //relese memory 
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;    
    }
    

    
    
    
    

    return 0;
}