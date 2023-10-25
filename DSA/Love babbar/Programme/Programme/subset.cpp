#include <iostream>
using namespace std;
#include <vector>

void subset(vector<int> arr, vector<int> output, vector<vector<int>> &ans, int ind)
{
    if (ind >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    subset(arr, output, ans, ind + 1);
    output.push_back(arr[ind]);
    subset(arr, output, ans, ind + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> output;
    vector<vector<int>> ans;
    subset(arr, output, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}