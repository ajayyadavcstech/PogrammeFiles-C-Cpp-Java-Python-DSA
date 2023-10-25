#include <iostream>
using namespace std;
void merge(int *arr, int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int arr1[len1];
    int arr2[len2];
    int arrlen = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[arrlen++];
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[arrlen++];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
            arr[k++] = arr2[j++];
    }
    while (i < len1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[k++] = arr2[j++];
    }
}
void mergesort(int *arr, int s, int e)
{
    if (s == e)
    {
        return;
    }
    int mid = (s + e) / 2; 

    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}
int main()
{
    int arr[14] = {5, 2, 1, 6, 7, 12, 97, 45, 32, 0, 77, 55, 53, 87};
    mergesort(arr, 0, 13);
    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}