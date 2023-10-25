#include <iostream>
using namespace std;
#include <vector>

int binarysearch(vector<int> v, int s, int e, int val) // binary search
{
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (v[mid] == val)
        {

            return mid;
        }
        else if (v[mid] > val)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int lowerbound(vector<int> v, int s, int e, int val) // lower bound
{
    int ind = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (v[mid] == val)

        {
            ind = mid;
            e = mid - 1;
        }
        else if (v[mid] > val)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    if (ind == -1)
    {
        return s;
    }
    return ind;
}
int upperbound(vector<int> v, int s, int e, int val) // upper bound
{
    int ind = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (v[mid] == val)

        {
            ind = mid;
            s = mid + 1;
        }
        else if (v[mid] > val)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    if (ind == -1)
    {
        return s;
    }
    return ind + 1;
}
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s) // pair sum questin using lower and upper bound
{
    // Write your code here.
    vector<vector<int>> ans;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        int val = s - arr[i];
        cout << val << " : ";
        int a = lowerbound(arr, i + 1, n - 1, val);
        int b = upperbound(arr, i + 1, n - 1, val);
        cout << a << " " << b << endl;
        for (int j = a; j < b; j++)
        {
            vector<int> v;
            v.push_back(arr[i]);
            v.push_back(arr[j]);
            ans.push_back(v);
        }
    }
    return ans;
}
int main()
{
    // cout<<"Enter no of element : ";
    // int n;
    // cin>>n;
    // cout<<"Enter all element : ";
    // vector<int> v ;
    // for(int i=0;i<n;i++){
    //     int val ;
    //     cin>>val;
    //     v.push_back(val);
    // }
    // cout<<"Enter value to search : ";
    // int k;
    // cin>>k;
    // // cout << binarysearch(v, 0, v.size() - 1, 6);
    // // cout<<endl ;
    // cout<<lowebound(v,0,v.size()-1,k)<<endl;
    // cout<<upperbound(v,0,v.size()-1,k);
    vector<int> arr = {2, -3, 3, 3, -2};
    int s = 0;
    vector<vector<int>> ans = pairSum(arr, s);
    cout << "ans is : " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}