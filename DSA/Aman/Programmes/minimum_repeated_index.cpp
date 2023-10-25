// Given an array arr[] of size N. The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest.
#include<iostream>
using namespace std;

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
    const int N=1e4;
    int index[N];
    for (int i = 0; i < N; i++)
    {
        index[i]=-1;
    }
    int min_index=INT32_MAX;

    for (int  i = 0; i < n; i++)
    {
        if(index[arr[i]]==-1)
        {
           index[arr[i]]=i;
        }
        else
        {
            min_index=min(min_index,index[arr[i]]);
        }
    }
    if(min_index==INT32_MAX)
    cout<<-1;
    else
    cout<<min_index+1;
    
    
    
    return 0;
}