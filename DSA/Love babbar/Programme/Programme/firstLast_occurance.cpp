#include <iostream>
#include <utility>
using namespace std;

pair<int, int> FirstLastOccurance(int arr[], int n, int k)
{
    pair<int, int> ans(-1, -1);
    int s = 0;
    int e = n - 1;
    while (s <= e) //for first occurance
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            ans.first = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    s = 0;
    e = n - 1;
    while (s <= e) //for last occurance
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            ans.second = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter n:-";
    cin >> n;
    cout << "Enter " << n << " elements :-";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    pair<int, int> ans;
    int k;
    cout << "Enter element you want to get occurance :-";
    cin >> k;
    ans = FirstLastOccurance(a, n, k);
    cout << "First occurance is: " << ans.first << endl;
    cout << "last occurance is: " << ans.second << endl;

    return 0;
}