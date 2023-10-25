// Given an unsorted array A of size N of non-negative integers, find a continuous
// subarray which adds to a given number S.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int st = 0;
    int et = 0;
    int s;
    cin >> s;
    int sum = 0;
    while (st >= 0 && et < n)
    {

        if (sum == s)
        {
            cout << ++st << " " << ++(--et);
            return 0;
        }
        else if (sum + arr[et] <= s)
        {
            sum += arr[et];
            et++;
        }
        else
        {
            sum -= arr[st];
            st++;
        }
    }
    cout << -1;

    return 0;
}