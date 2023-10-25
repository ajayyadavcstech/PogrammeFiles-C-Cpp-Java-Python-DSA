#include <iostream>
using namespace std;
void merge(int *a, int low, int mid, int high)
{
    int b[100]; //creting array of finite size to copy sorted array
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];//copying rest part of an array
    }
    while (j <= high)
    {
        b[k++] = a[j++];
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i]; //copying the part of an b[] array to main array a[] so that it reflect in every recursoin process
    }
}
void merge_sort(int *a, int l, int h)
{
    if (l == h) //if low=high then there is only single element which obiously already sorted
    {
        return;
    }
    int mid = (l + h) / 2; //mid of an array
    merge_sort(a, l, mid); //applying merge sort for left part of an array
    merge_sort(a, mid + 1, h); // applying merge sort for right part of an array
    merge(a, l, mid, h);// manually merging using merge function during returning time 
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        ;
    }
    cout << endl;
}
int main()
{
    int a[] = {3, 1, 6, 2, 8, 9};
    int n = 6;
    print(a, n);
    merge_sort(a, 0, n - 1);
    print(a, n);

    return 0;
}