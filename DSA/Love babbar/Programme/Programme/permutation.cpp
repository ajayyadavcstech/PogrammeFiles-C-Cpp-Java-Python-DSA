#include <iostream>
using namespace std;
#include <vector>
void permutation(string str, vector<string> &ans, string output)
{
    if (str.length() == 0)
    {
        ans.push_back(output);
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        output.push_back(str[i]);
        permutation(str.erase(i, 1), ans, output);
        str.insert(i, 1, ch);
        output.pop_back();
    }
}
void sort(string &str)
{
    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        int ind = str[i] - 'a';
        arr[ind]++;
    }
    int k = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            int j = 0;
            while (j < arr[i])
            {
                str[k++] = i + 'a';
                j++;
            }
        }
    }
}

int main()
{
    string str = "acb";
    sort(str);
    cout << str << endl;
    vector<string> ans;
    string output;
    permutation(str, ans, output);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }

    return 0;
}