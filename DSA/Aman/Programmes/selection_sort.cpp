#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int swap=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=swap;
    }
      
}
int main()
{
    cout << "Enter the size of an array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SelectionSort(arr, n);
      for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "  ";
        }

    return 0;
}