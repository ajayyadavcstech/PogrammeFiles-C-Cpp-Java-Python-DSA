#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{
    string ans="";

    long long int ind = s.find(part);
    while (s.length() != 0 && ind <= s.length())
    {
        for (int i = 0; i < ind; i++)
        {
            ans.push_back(s[i]);
        }
        for (int i = ind + part.length(); i < s.length(); i++)
        {
            ans.push_back(s[i]);
        }
        s = ans;
        ind = s.find(part);
    }
    return ans;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(s, part);

    return 0;
}