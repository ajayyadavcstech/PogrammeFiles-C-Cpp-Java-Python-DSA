#include <iostream>
using namespace std;
#include <vector>
int cnt = 0;
vector<vector<int>> memo;
int count;
void print()
{

    cout << "count :--> " << count++ << "    " << endl;
    cout << "    ";
    for (int i = 0; i < memo[0].size(); i++)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < memo[0].size(); i++)
        cout << "___";
    cout << endl;
    for (int i = 0; i < memo.size(); i++)
    {
        cout << i << " | ";
        for (int j = 0; j < memo[0].size(); j++)
        {
            cout << memo[i][j] << " ";
        }
        cout << endl;
    }
}
int LCS(string s1, string s2, int n, int m) // Top Down Method
{
    cnt++;
    if (n == 0 || m == 0)
    {
         print();
        return 0; 
    }
    if (memo[n][m] != -1){
             print();
        return memo[n][m]; 
    }
    if (s1[n - 1] == s2[m - 1])
    {
          print();
        return memo[n][m] = 1 + LCS(s1, s2, n - 1, m - 1);
    }
    else
    {
          print();
        return memo[n][m] = max(LCS(s1, s2, n, m - 1), LCS(s1, s2, n - 1, m));
    }
  

}
int LCSBottomUp(string s1, string s2, int n, int m) // bottom up
{
    vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));
    for (int i = 0; i <= n; i++)
    {
        memo[i][0] = 0;
    }
    for (int i = 0; i <= m; i++)
    {
        memo[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cnt++;
            if (s1[i - 1] == s2[j - 1])
            {
                memo[i][j] = 1 + memo[i - 1][j - 1];
            }
            else
            {
                memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]);
            }
        }
    }
    return memo[n][m];
}

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    memo.resize(s1.size() + 1, vector<int>(s2.size() + 1, -1));
    cout << LCS(s1, s2, s1.length(), s2.length()) << endl;
    cout << cnt;

    return 0;
}