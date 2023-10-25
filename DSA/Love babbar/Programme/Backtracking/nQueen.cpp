#include <iostream>
using namespace std;
#include <vector>

void traverse(vector<vector<int>> &arr, vector<int> &v)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            v.push_back(arr[i][j]);
        }
    }
}
bool isSafe(int i, int j, int n, vector<vector<int>> &arr)
{
    for (int col = j - 1; col >= 0; col--)
    {
        if (arr[i][col] == 1)
            return false;
    }

    int row = i + 1;
    int col = j - 1;
    while (row < n && col >= 0)
    {
        if (arr[row++][col--] == 1)
            return false;
    }
    row = i - 1;
    col = j - 1;
    while (row >= 0 && col >= 0)
    {
        if (arr[row--][col--] == 1)
            return false;
    }
    return true;
}
void solve(int j, int n, vector<vector<int>> &arr, vector<vector<int>> &ans)
{
    if (j == n)
    {
        cout<<"1"<<endl;
        vector<int> v;
        traverse(arr, v);
        ans.push_back(v);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isSafe(i, j, n, arr))
        {
            arr[i][j] = 1;
            solve(j + 1, n, arr, ans);
            arr[i][j] = 0;
        }
    }
}
vector<vector<int>> nQueens(int n)
{
    // Write your code here
    vector<vector<int>> arr(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    solve(0, n, arr, ans);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    v = nQueens(n);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << v.size() << endl;

    return 0;
}