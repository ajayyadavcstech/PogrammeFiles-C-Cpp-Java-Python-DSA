#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }
    int duplicate = ans;
    int count = 0;
    while (1)
    {
        if ((ans & (1 << count)) == 0)
        {
            count++;
        }
        else
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if ((duplicate & 1 << count) == (a[i] & 1 << count))
        {
            ans ^= a[i];
        }
    }
    cout << ans << " " << (ans ^ duplicate);

    return 0;
}