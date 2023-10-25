#include<iostream>
using namespace std;
int mountain(int *arr,int s,int e)
{
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    {
        return mid;
    }
    else if(arr[mid]>arr[mid-1]){
       return mountain(arr,mid+1,e);
    }
    else
    return  mountain(arr,s,mid-1);

}

int main()
{
    int arr[]={1,2,3,4,3,2};
    cout<<mountain(arr,1,4);
    
    

    return 0;
}