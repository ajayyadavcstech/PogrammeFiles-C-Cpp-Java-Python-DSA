#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            s=arr[mid]+1;
        }
        else
        {
           e=arr[mid]-1;
        }

    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binary(arr,n,key);
}
