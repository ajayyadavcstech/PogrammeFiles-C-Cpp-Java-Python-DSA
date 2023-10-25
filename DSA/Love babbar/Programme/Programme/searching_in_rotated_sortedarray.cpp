#include <iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int k)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int pivot(int arr[], int n) //it gives rte when mid==0 ans mid==n-1 it try to access mid-1 and mid+1 respectively so update it
{
    int ans;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}
int updatedpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else

            e = mid;
    }
    return e;
}
int searchinrotatedarray(int arr[], int n, int k)
{
    int pivo = updatedpivot(arr, n);
    if (k >= arr[pivo] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivo, n - 1, k);
    }
    else
        return binarysearch(arr, 0, pivo - 1, k);
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