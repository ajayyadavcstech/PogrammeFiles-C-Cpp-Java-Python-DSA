//you are giben an array of N integers including 0. The task is to fing the smallest positive numbe missing from the array.
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
    int b[100000];
    for (int i = 0; i < n; i++)
    {
        b[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            b[a[i]] = 1;
    }
    for (int i = 0; i < 100000; i++)
    {
        if (b[i] == -1)
        {
            cout << i;
            break;
        }
    }

    return 0;
}