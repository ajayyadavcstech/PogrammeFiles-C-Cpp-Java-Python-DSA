// 5 = 0 1 0 1          |  0   0 = 0
// 5 = 0 1 0 1          |  0   1 = 1
//---------------       |  1   0 = 1
//^    0 0 0 0          |  1   1 = 0

#include <iostream>
#include <math.h>
using namespace std;

int unique_no(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i]; // ^ (xor) operator and xor of two same no is always 0
    }
    return ans;
}
void two_unique_no(int a[], int n) // 0 ^ 1 =1 (when the right most set bit is 1 iterate over array having right most set bit 1 )
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    int pos = 0;
    while (1)
    {
        if ((1 << pos) & ans) //iterating till right most bit is 1
        {
            break;
        }
        pos++;
    }
    int ans1 = ans;
    for (int i = 0; i < n; i++)
    {
        if ((1 << pos) & a[i])
        {
            ans = ans ^ a[i];
        }
    }
    cout << ans << " " << (ans ^ ans1);
}
int unique_in_tripplet(int a[], int n)
{
    int bit[32];
    for (int i = 0; i < 32; i++)
    {
        bit[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (((1 << j) & a[i]))
            {
                bit[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        bit[i] %= 3;
        ans = ans + (pow(2, i) * bit[i]);
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << unique_in_tripplet(a, n);

    return 0;
}