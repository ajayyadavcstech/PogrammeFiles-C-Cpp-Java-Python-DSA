#include <iostream>
using namespace std;
#include<vector>
vector<int> memo;

int fib(int n, int &cnt)
{
    if (n == 0 || n == 1)
        return n;
        if(memo[n]!=-1) return memo[n];
        cnt++;
    return  memo[n]=fib(n - 1, cnt) + fib(n - 2, cnt);
}
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    memo.resize(n+1,-1);
    cout << fib(n, cnt) << endl;
    cout << cnt;

    return 0;
}