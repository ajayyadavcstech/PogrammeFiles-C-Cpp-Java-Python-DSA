#include <iostream>
using namespace std;
#include <vector>
bool issafe(int row, int col, vector<vector<int>> &visited, int n, vector<vector<int>> &arr)
{
    if ((row >= 0 && row < n) && (col >= 0 && col < n) && (visited[row][col] == 0) && (arr[row][col] == 1))
    {
        return true;
    }
    return false;
}
void ratinmaze(vector<vector<int>> arr, int row, int col, string path, vector<string> &ans, vector<vector<int>> &visited)
{
    if ((row == arr.size() - 1) && (col == arr[0].size() - 1))
    {
        ans.push_back(path);
        return;
    }

    visited[row][col] = 1;
    //left
    if (issafe(row, col - 1, visited, arr.size(), arr))
    {
        path.push_back('L');
        ratinmaze(arr, row, col - 1, path, ans, visited);
        path.pop_back();
    }
    //right
    if (issafe(row, col + 1, visited, arr.size(), arr))
    {
        path.push_back('R');
        ratinmaze(arr, row, col + 1, path, ans, visited);
        path.pop_back();
    }
    //up
    if (issafe(row - 1, col, visited, arr.size(), arr))
    {
        path.push_back('U');
        ratinmaze(arr, row - 1, col, path, ans, visited);
        path.pop_back();
    }
    //down
    if (issafe(row + 1, col, visited, arr.size(), arr))
    {
        path.push_back('D');
        ratinmaze(arr, row + 1, col, path, ans, visited);
        path.pop_back();
    }
    visited[row][col] = 0;
}

int main()
{
    vector<vector<int>> arr = {{0, 1, 1, 1},
                               {1, 1, 1, 0},
                               {1, 0, 1, 1},
                               {0, 0, 1, 1}};
    vector<vector<int>> visited = arr;
    vector<string> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            visited[i][j] = 0;
        }
    }
    string path;
    ratinmaze(arr, 0, 0, path, ans, visited);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}