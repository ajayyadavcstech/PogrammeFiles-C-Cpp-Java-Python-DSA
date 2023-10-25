#include<iostream>
using namespace std;
int Linrearsearch(int arr[],int n,int k)
{
    for (int  i = 0; i < n; i++)
    {
        if(k==arr[i])
        {
            return i;
        }
    }
    return -1;
    
}
int main()
{
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key"<<endl;

    int k;
    cin>>k;

    cout<<Linrearsearch(arr,n,k);
    
    return 0;
}