#include <iostream>
using namespace std;
bool binarysearch (int *arr,int s,int e,int target)
{
    if(s>e)
        return false;

    int mid=(s+e)/2;
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target)
    {
        return binarysearch(arr,s,mid-1,target);
    }
    else
    return binarysearch(arr,mid+1,e,target);
}
bool linearsearch(int *arr,int n,int target)
{
    if(n==0)
        return false;
    
    if(arr[0]==target)
    return true;

    return linearsearch(arr+1,n-1,target);
}
int sum(int *arr,int n)
{
    if(n==1)
        return arr[0];
    
    return arr[0]+sum(arr+1,n-1);
}
bool sorted(int *arr, int n)
{
    //base case
    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    return sorted(arr + 1, n - 1); 
}
int main()
{
    int arr[5] = {1,3,4,5,6};
    // cout << sorted(arr, 1);

    // cout<<sum(arr,5);

    // cout<<linearsearch(arr,5,0);

    cout<<binarysearch(arr,0,4,0);

    return 0;
}