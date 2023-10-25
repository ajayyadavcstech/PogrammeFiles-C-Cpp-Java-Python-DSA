// 0 1 1 2 3 5 8
#include <iostream>
using namespace std;
#include <vector>
int cnt;
int fib1(int n) // simple recursion
{
    cnt++;
    if (n <= 1)
        return n;
    return fib1(n - 1) + fib1(n - 2);
}

vector<int> dp;
int fib2(int n) // using memorization
{
    cnt++;
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib2(n - 1) + fib2(n - 2);
}

int fib3(int n) // using tabulation
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int fib4(int n) // space optimization
{
    int pre1 = 0;
    int pre2 = 1;
    for (int i = 1; i <= n; i++)
    {
        int cur = pre1 + pre2;
        pre1 = pre2;
        pre2 = cur;
    }
    return pre1;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    dp.resize(n + 1, -1);
    cout << fib1(n) << endl;
    cout << cnt << endl;
    cnt = 0;
    cout << fib2(n) << endl;
    cout << cnt << endl;

    return 0;
}