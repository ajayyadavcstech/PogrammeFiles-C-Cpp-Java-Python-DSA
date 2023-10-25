#include <iostream>
using namespace std;
#include <vector>

int binary(vector<int> arr, int val, int s, int e)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> v;
    cout << "Enter Element : ";
    int n;
    cin >> n;
    while (n != -1)
    {
        v.push_back(n);
        cin >> n;
    }
    int target;
    cout << "Enter target : ";
    cin >> target;
    int s = 0;
    int e = 1;
    while (v[e] < target)
    {
        s = e;
        e = 2 * e;
    }
    cout << binary(v, target, s, e);

    return 0;
}