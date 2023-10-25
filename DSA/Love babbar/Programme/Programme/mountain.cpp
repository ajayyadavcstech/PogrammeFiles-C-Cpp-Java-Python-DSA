#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{

    int s = 1;
    int e = arr.size() - 2;
    while (s <= e)
    {
        int mid = s + e / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {

            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return 0;
}

int main()
{
    vector<int> arr;
    arr={3,5,3,2,0};
  cout<<  peakIndexInMountainArray(arr);

    return 0;
}