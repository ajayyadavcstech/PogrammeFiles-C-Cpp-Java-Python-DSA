#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maximun = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maximun = max(maximun, a[i]);
        cout << maximun << " ";
    }

    return 0;
}