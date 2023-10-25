#include <iostream>
using namespace std;
#include <vector>
vector<vector<int>> dp;
int cnt;
void print()
{
    cout << "count :--> " << cnt++ << "    " << endl;
    cout << "    ";
    for (int i = 0; i < dp[0].size(); i++)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < dp[0].size(); i++)
        cout << "___";
    cout << endl;
    for (int i = 0; i < dp.size(); i++)
    {
        cout << i << " | ";
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
int LIS(vector<int> &v, int n, int pre)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n][pre] != 0)
        return dp[n][pre];
    int lar = LIS(v, n - 1, pre);
    if (pre == v.size() || v[pre] > v[n - 1])
    {
        lar = max(lar, 1 + LIS(v, n - 1, n - 1));
    }
    return dp[n][pre] = lar;
}
int bottomup(vector<int> &v, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j == v.size() || v[i - 1] < v[j])
            {
                dp[i][j] = max(dp[i][j], 1 + dp[i - 1][i - 1]);
            }
        }
    }
    return dp[v.size()][v.size()];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout<<"Top Down Solution "<<endl;
    dp.resize(v.size() + 1, vector<int>(v.size() + 1, 0));
    cout << LIS(v, v.size(), v.size()) << endl;
    print();
    cout<<endl<<endl;
    cout<<"bottom UP Solution "<<endl;
    dp.clear();
    dp.resize(v.size() + 1, vector<int>(v.size() + 1, 0));
    cout << bottomup(v, n) << endl;
    print();
}