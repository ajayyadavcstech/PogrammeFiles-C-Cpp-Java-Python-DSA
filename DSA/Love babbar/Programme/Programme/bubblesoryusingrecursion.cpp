#include <iostream>
using namespace std;

void selectionsort(int *arr, int n)
{
    if (n == 0)
        return;
    int minindex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[minindex] > arr[i])
            minindex = i;
    }
    swap(arr[0], arr[minindex]);
    selectionsort(arr + 1, n - 1);
}
void bubblesort(int *arr, int n)
{
    if (n == 0)
        return;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
    }
    bubblesort(arr, n - 1);
}
int main()
{
    int arr[5] = {4, 5, 1, 7, 2};
    selectionsort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}