//it is not stable 
//it is inplace algorithm(it does not extra space)
// best and averge case O(n*log(n))
//worst case O(n^2)
#include <iostream>
using namespace std;
void traversal(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition_index(int *arr, int low, int high)
{
    int pivot = low;
    int i = low + 1;
    int j = high;
    while (true)
    {
        while (arr[i] <= arr[pivot])
        {
            i++;
        }
        while (arr[j] > arr[pivot]) //here we always use ">" not ">=" because in case of = sign it comes 1 more back if pivot is equal to that last elemet 
                                    // eg. ,   8       5      7     8     9     10    
                                    //      pivate                  j     i             hera i<j still a[i]>=a[pivate]  this comdtion is true so j moves back and make whole problem wrong so we use only i>j here
        {
            j--;
        }
        if (i >j)
        {
            int swap = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = swap;

            return j;
        }
        int swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
    }
}
void quick_sort(int *arr, int low, int high)
{
    if (low >= high) //base condtion to termiate recurssion
    {
        return;
    }

    int partitionindex = partition_index(arr, low, high);
    quick_sort(arr, low, partitionindex - 1);
    quick_sort(arr, partitionindex + 1, high);
}
int main()
{
    // int arr[] = {5, 1, 8, 7, 3, 8, 2};
    int arr[] = {1,2,3,4,5,6,7};  // this is worst case because every element is on their pistion and j has to come
    int n = 7;
    traversal(arr, n);
    quick_sort(arr, 0, n - 1);
    traversal(arr, n);
    return 0;
}