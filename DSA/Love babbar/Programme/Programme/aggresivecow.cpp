#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible(vector<int> arr, int n, int k, int mid)
{

    int position = arr[0];
    int no_of_cow = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - position>= mid)
        {
            no_of_cow++;
            if(no_of_cow==k){
                return true;
            }
            position = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    //    Write your code here.
    int s = 0;
    int e = -1;
    for (int i = 0; i < n; i++)
    {
        e = max(e, stalls[i]);
    }
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (possible(stalls, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    cout << aggressiveCows(arr, 2);

    return 0;
}