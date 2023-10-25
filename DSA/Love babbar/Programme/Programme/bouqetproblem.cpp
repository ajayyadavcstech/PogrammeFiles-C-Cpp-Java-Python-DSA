#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int> arr, int m, int k, int mid)
{
    int bouqet = 1;
    int no_of_flower = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= mid)
        {
            no_of_flower++;
            if (no_of_flower == k)
            {
                no_of_flower = 0;
                bouqet++;
            }
        }
        else
        {
            no_of_flower = 0;
        }
    }
    if (bouqet > m)
    {
        return true;
    }
    else
        return false;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size();
    if (m * k > n)
    {
        return -1;
    }
    int s = INT32_MAX;
    int e = INT32_MIN;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        s = min(s, bloomDay[i]);
        e = max(e, bloomDay[i]);
    }
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (ispossible(bloomDay, m, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}
int main()
{
    cout << "running..." << endl;
    vector<int> a = {1,10,3};
    cout << minDays(a, 3, 1);

    return 0;
}