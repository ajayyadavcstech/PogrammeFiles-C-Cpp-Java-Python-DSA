#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

int solve(string s)
{
    unordered_map<char, int> mp;

    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'c')
            mp[s[i]]++;
        else if (s[i] == 'o')
            mp[s[i]]++;
        else if (s[i] == 'v')
            mp[s[i]]++;
        else if (s[i] == 'i')
            mp[s[i]]++;
        else if (s[i] == 'd')
            mp[s[i]]++;
    }
    string temp = "covid";
    int mn = INT32_MAX;
    for (int i : temp)
    {
        mn = min(mn, mp[i]);
    }
    return mn;
}
int main()
{
    cout<<"Enter s "<<endl;
    string s;
    getline(cin, s);
    cout << solve(s);

    return 0;
}