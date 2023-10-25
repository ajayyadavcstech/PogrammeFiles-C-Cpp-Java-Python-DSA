#include <iostream>
using namespace std;
#include <vector>
void solve(vector<vector<int>> &arr, int &n, int i, int j, vector<vector<bool>> &visited, string &path, vector<string> &ans)
{
    if (i < 0 || i == n || j < 0 || j == n || visited[i][j] || arr[i][j] == 0)
        return;

    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[i][j] = true;

    path.push_back('D');
    solve(arr, n, i + 1, j, visited, path, ans);
    path.pop_back();

    path.push_back('L');
    solve(arr, n, i, j - 1, visited, path, ans);
    path.pop_back();

    path.push_back('R');
    solve(arr, n, i, j + 1, visited, path, ans);
    path.pop_back();

    path.push_back('U');
    solve(arr, n, i - 1, j, visited, path, ans);
    path.pop_back();

    visited[i][j] = false;
}
vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    // Write your code here.
    string path;
    vector<vector<bool>> visited(n, vector<bool>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
        }
    }
    vector<string> ans;
    solve(arr, n, 0, 0, visited, path, ans);
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    cout << "Enter " << n << " * " << n << " size array : " << endl;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<string> ans = searchMaze(v, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}