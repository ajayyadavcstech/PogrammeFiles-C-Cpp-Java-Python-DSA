#include <iostream>
using namespace std;
#include <vector>
string mapped(char ch)
{
    switch (ch)
    {
    case '2':
        return "ABC";
        break;
    case '3':
        return "DEF";
    case '4':
        return "GHI";
    case '5':
        return "JKL";
    case '6':
        return "MNO";
    case '7':
        return "PQRA";
    case '8':
        return "TUV";
    case '9':
        return "WXYZ";

    default:
        break;
    }
    return "";
}
void moblie(string s, string temp, vector<string> &ans, int ind)
{
    if (ind >= s.size())
    {
        ans.push_back(temp);
        return;
    }
    string key = mapped(s[ind]);
    for (int i = 0; i < key.length(); i++)
    {
        temp.push_back(key[i]);

        moblie(s, temp, ans, ind + 1);
        temp.pop_back();
    }
}

int main()
{
    string arr = "234";
    string temp = "";
    vector<string> ans;
    moblie(arr, temp, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << endl;
    }

    return 0;
}