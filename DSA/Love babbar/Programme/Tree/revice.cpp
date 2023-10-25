#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int search(vector<int> &v, int val)
    {
        int s = 0;
        int e = v.size() - 1;
        int count = 0;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (v[mid] == val)
            {
                count++;
                int i = mid + 1;
                while ((v[i] == val) && (i < v.size()))
                {
                    count++;
                    i++;
                }
                i = mid - 1;
                while ((v[i] == val) && (i >= 0))
                {
                    count++;
                    i--;
                }
            }
            else if (v[mid] > val)
            {
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        cout<<"inside fun"<<count<<endl;
        return count;
    }
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        vector<int> winner;
        vector<int> looser;
        for (int i = 0; i < matches.size(); i++)
        {
            winner.push_back(matches[i][0]);
            looser.push_back(matches[i][1]);
        }
        cout << "here1" << endl;
        vector<int> ans1;
        vector<int> ans2;
        for (int i = 0; i < winner.size(); i++)
        {
            int count = search(looser, winner[i]);
            cout << count << endl;
            if (count == 0)
            {
                ans1.push_back(winner[i]);
            }
            else if (count == 1)
            {
                ans2.push_back(winner[i]);
            }
        }
        cout << "here2" << endl;
        vector<vector<int>> ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        for (int i = 0; i < ans1.size(); i++)
        {
            cout << ans1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < ans2.size(); i++)
        {
            cout << ans2[i] << " ";
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> matches = {{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
    vector<vector<int>> ans;
    Solution ss;
    ans = ss.findWinners(matches);
    for (int i = 0; i < ans[0].size(); i++)
    {
        cout << ans[0][i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ans[1].size(); i++)
    {
        cout << ans[1][i] << " ";
    }

    return 0;
}