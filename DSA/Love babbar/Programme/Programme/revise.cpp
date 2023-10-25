#include <iostream>
#include <vector>
using namespace std;

//binary search logic
int binarysearch(vector<int> arr, int s, int e, int k)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    //step 1: find pivot
    int pivot;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if(mid==0 && mid==n-1){
            pivot=mid;
            break;
        }
        if(mid==0 && arr[mid]<arr[mid+1]){
             pivot = mid;
            break;
        }
        if (mid == n - 1 && arr[mid] < arr[mid - 1])
        {
            pivot = mid;
            break;
        }
        if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            pivot = mid;
            break;
        }
        else if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }

    //step 2:logic for finding element
    if (arr[pivot] <= k && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, k);
    }
    else
        return binarysearch(arr, 0, pivot - 1, k);
    return -1;
}
int main()
{

    int n = 5;
    vector<int> a = {10,1,2,5,6};
    int k = 10;

    cout << findPosition(a, n, k);

    return 0;
}//5 10
// 10 1 2 5 6 