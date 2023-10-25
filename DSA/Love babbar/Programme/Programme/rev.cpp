#include <iostream>
using namespace std;

void rev(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int swap = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = swap;
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter no of element :-";
    cin >> n;
    cout << "Enter " << n << " no of elements :-";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Reversing array......." << endl;
    rev(a, n);
    print(a, n);

    return 0;
}