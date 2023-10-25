#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) //Time complexity : O(n)  || Space complexity : O(1)
{
    int s = 0;     //constant space O(1)
    int e = n - 1; //constant space O(1)
    while (s <= e) //O(n)
    {
        int mid = s / 2.0 + (e / 2.0); //O(1) time 
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;  
        }
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter element : ";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter key : ";
    cin >> k;
    int index = binarysearch(a, n, k);
    if (index < 0)
    {
        cout << "Not found !";
    }
    else
        cout << "Found at index : " << index;

    return 0;
}