#include <iostream>
#include <algorithm>
using namespace std;
int EditDistance(string s1, string s2, int n, int m)
{
    if (n == 0 && m == 0)
        return 0;
    if (n == 0 || m == 0)
    {
        return max(n, m);
    }
    if (s1[n - 1] == s2[m - 1])
    {
        return EditDistance(s1, s2, n - 1, m - 1);
    }
    else
    {
        return 1 + min({EditDistance(s1, s2, n - 1, m), EditDistance(s1, s2, n, m - 1), EditDistance(s1, s2, n - 1, m - 1)});
    }
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << EditDistance(s1, s2, s1.size(), s2.size());

    return 0;
}