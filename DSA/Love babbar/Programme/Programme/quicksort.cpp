#include <iostream>
using namespace std;
int partion(int *arr, int s, int e)
{
    int count = 0;
    int pivot = arr[s];
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            count++;
    }
    swap(arr[s], arr[s + count]);

    int i = s;
    int j = e;

    while (i < j)
    {
        while (arr[i] < pivot && i < j)
        {
            i++;
        }
        while (arr[j] > pivot && i < j)
        {
            j--;
        }
        swap(arr[i++], arr[j--]);
    }
    return s+count;
}
void quicksort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int index = partion(arr, s, e);

    quicksort(arr, s, index - 1);
    quicksort(arr, index + 1, e);
}
int main()
{
    int arr[6]={0, 9, -4, -9, -9, -7 };
    quicksort(arr,0,5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}