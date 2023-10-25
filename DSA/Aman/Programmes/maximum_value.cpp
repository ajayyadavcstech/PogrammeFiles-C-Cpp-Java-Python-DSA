#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter n" << endl;
    int n;
    cin >> n;
    int arr[n];
    int mx = INT32_MIN, mn = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    cout << "Maximum value is " << mx << endl
         << "min value is " << mn;

    return 0;
}