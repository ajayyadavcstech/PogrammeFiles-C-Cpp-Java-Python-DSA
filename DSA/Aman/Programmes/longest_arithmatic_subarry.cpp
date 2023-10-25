#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter the value of an array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_length = 2;

    int current_length = 2;
    int difference = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (difference == arr[i] - arr[i - 1])
        {
            current_length++;
        }
        else
        {
            current_length = 2;
            difference = arr[i] - arr[i - 1];
        }
        max_length = max(max_length, current_length);
    }
    cout << max_length;

    return 0;
}