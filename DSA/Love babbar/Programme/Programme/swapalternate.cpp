#include <iostream>
using namespace std;

void swapalternate(int a[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i == n - 1) //to handle odd no of elements
            return;
        int swap = a[i];
        a[i] = a[i + 1];
        a[i + 1] = swap;
    }
}
int main()
{
    int n;
    cout << "Enter n:-";
    cin >> n;
    int a[n];
    cout << "Enter" << n << " n no:-";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    swapalternate(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}