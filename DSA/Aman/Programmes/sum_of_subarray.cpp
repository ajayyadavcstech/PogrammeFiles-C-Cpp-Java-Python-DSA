#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < n; i++)
    {
        int sum=0;
        for (int  j = i; j < n; j++)
        {
            sum=sum+arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}