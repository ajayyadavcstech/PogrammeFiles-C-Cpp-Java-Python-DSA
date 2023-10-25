#include <iostream>
using namespace std;
#include <vector>
string mobile(char ch)
{
    switch (ch)
    {
    case '2':
        return "abc";
        break;
    case '3':
        return "def";
    case '4':
        return "ghi";
        break;

    case '5':
        return "jkl";
        break;

    case '6':
        return "mno";
        break;

    case '7':
        return "pqrs";
        break;

    case '8':
        return "tuv";
        break;

    case '9':
        return "wxyz";
        break;

    default:
        break;
    }
}
void combination(string arr, string temp, vector<string> &ans, int ind)
{
    if (ind >= arr.size())
    {
        ans.push_back(temp);
        return;
    }
    string s = mobile(arr[ind]);
    for (int i = 0; i < s.length(); i++)
    {
        temp.push_back(s[i]);
        combination(arr, temp, ans, ind + 1);
        temp.pop_back();
    }
}

int main()
{
    cout << "running" << endl;
    string arr = "234";
    string temp = "";
    vector<string> ans;
    combination(arr, temp, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}