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
    int s = 0;
    int e = 0;
    while (s <= e)
    {
        if (s == n)
        {
            break;
        }

        if (e == n)
        {
            s++;
            e = s;
            continue;
        }

        cout << "{";
        for (int i = s; i <= e; i++)
        {
            cout << a[i] << ",";
        }
        cout << "}";
        cout << endl;
        e++;
    }

    return 0;
}