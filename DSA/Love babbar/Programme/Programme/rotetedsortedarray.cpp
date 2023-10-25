#include<iostream>
using namespace std;

int pivo(int *arr,int s,int e )
{
    if(s==e){
        return e;
    }

    int mid=(s+e)/2;
    if(arr[mid]>=arr[0])
    {
        return pivo(arr,mid+1,e);
    }
    else
    return pivo(arr,s,mid);
}
int binarysearch(int *p,int s,int e,int k){
    if(s>e)
    return -1;

    int mid=s+(e-s)/2;
    if(p[mid]==k){
        return mid;
    }
    else if(p[mid]>k){
        return binarysearch(p,s,mid-1,k);
    }
    else
    return binarysearch(p,mid+1,e,k);
}
int searchinrotatedarray(int *arr,int n,int k)
{
    int pivot=pivo(arr,0,n-1);
    if(k >= arr[pivot] && k <= arr[n - 1])
    {
    return binarysearch(arr,pivot,n-1,k);
    }
    else
        return binarysearch(arr,0,pivot-1,k);
}

int main()
{
       int n;
    cout << "Enter n:-";
    cin >> n;
    cout << "Enter " << n << " elements :-";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter key to search : ";
    cin >> k;
    cout << searchinrotatedarray(a, n, k);
    return 0;
}