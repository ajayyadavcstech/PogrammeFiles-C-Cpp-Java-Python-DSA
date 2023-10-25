//here only single array is given which is divided into 2 sorted parts and we have to srot it to another array
//   a[]={2,3,6,8  ,1,4,5,7,9}  int single array 2 sorted array are given
//        i         j
#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int *merge_sort(int *a, int n, int s1, int s2)
{
    int *merge = new int[n];
    int i = s1;
    int j = s2;
    int k = 0;
    while (i < s2 && j < n)
    {
        if (a[i] < a[j])
        {
            merge[k] = a[i];
            i++;
            k++;
        }
        else
        {
            merge[k] = a[j];
            k++;
            j++;
        }
    }
    while (i < s2)
    {
        merge[k++] = a[i++];
    }
    while (j < n)
    {
        merge[k++] = a[j++];
    }
    return merge;
}
int main()
{
    int a[] = {3, 5, 7, 9, 1, 2, 6, 8};
    int n = 8;
    print(a, n);
    int *c = merge_sort(a, n, 0, 4);
    print(c, n);

    return 0;
}