#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            cout << " i " << i << endl;
            cout << nums[i] << endl;
            cout << "here" << endl;
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            cout << "here1" << endl;
            int target = 0 - nums[i];
            cout << "aaa" << endl;

            int j = i + 1;
            int k = nums.size() - 1;
            cout << i << " " << j << " " << k << endl;

            while (j < k)
            {
                cout << i << " " << j << " " << k << endl;
                if (nums[j] + nums[k] == target)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (nums[j] == nums[j + 1] && j < nums.size())
                    {
                        j++;
                    }
                    j++;
                    while (nums[k] == nums[k - 1] && k > i)
                    {
                        k--;
                    }
                    k--;
                    cout << "h" << endl;
                }

                else if (nums[j] + nums[k] > target)
                {
                    while (nums[k] == nums[k - 1] && k > i)
                    {
                        k--;
                    }
                    k--;
                    cout << "JJJJJ" << endl;
                    cout << i << " " << j << " " << k << endl;
                }

                else
                {
                    while (nums[j] == nums[j + 1] && j < nums.size())
                    {
                        j++;
                    }
                    j++;
                    cout << "hh" << endl;
                }
                cout << "HHH" << endl;
                cout << i << " " << j << " " << k << endl;
            }
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> ans;
    Solution s;
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    ans = s.threeSum(v);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}