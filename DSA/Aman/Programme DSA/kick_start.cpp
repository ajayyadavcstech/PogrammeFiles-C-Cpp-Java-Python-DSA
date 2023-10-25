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
    int ans = 0;
    int max_arr = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==a[n-1] && a[i]>max_arr)
        {
            ans++;
            continue;
        }
        
        if (a[i] > max_arr && a[i] > a[i + 1])
        {
            ans++;
        }
        max_arr = max(max_arr, a[i]);
    }
   cout<<ans;
    return 0;
}