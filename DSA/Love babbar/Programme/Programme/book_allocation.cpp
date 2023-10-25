#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{
    int sum = 0;
    int studencout = 1;
    for (int i = 0; i < n;)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i++];
        }
        else
        {
            sum = 0;
            studencout++;
            if (studencout > m)
            {
                return false;
            }
        }
    }
    return true;
}

int maxpage(int arr[], int n, int m)
{
    int s = INT_MIN;
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
        s = max(s, arr[i]);
    }
    int ans=-1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid))
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
    int arr[]={1,2,2,3,1};
    cout<<maxpage(arr,5,3);

    return 0;
}