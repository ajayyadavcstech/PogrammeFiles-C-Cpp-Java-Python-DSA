#include <iostream>
using namespace std;

int pivot(int arr[], int n) //it gives rte when mid==0 ans mid==n-1 it try to access mid-1 and mid+1 respectively so update it
{
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
    return -1;
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
    cout << "pivot index is " << updatedpivot(a, n);

    return 0;
}