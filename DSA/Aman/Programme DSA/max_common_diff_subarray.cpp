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
    int pre_diff = 0;
    int ans = 0;
    int cur_max = 1;
    for (int i = 1; i < n; i++)
    {
        int cur_diff = a[i] - a[i-1];
        if (cur_diff == pre_diff)
        {
            cur_max++;
            ans = max(ans, cur_max);
        }
        else
        {
            cur_max = 2;
            ans = max(ans, cur_max);

        }
        pre_diff=cur_diff;
    }
    cout<<ans;


    return 0;
}