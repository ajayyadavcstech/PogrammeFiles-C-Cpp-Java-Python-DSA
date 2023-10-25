#include <iostream>
#include <vector>
using namespace std;

int compress1(vector<char> &chars) //for sorted string
{
    int count[26] = {0};

    for (int i = 0; i < chars.size(); i++)
    {
        int ind = chars[i] - 'a';
        count[ind]++;
    }

    chars.clear();
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 1)
        {
            chars.push_back(i + 'a');
        }
        else if (count[i] > 1)
        {
            chars.push_back(i + 'a');
            if (count[i] < 10)
            {
                char ch = char('0' + count[i]);
                chars.push_back(ch);
            }
            else
            {
                char ch = char('0' + count[i] / 10);
                chars.push_back(ch);
                ch = char('0' + count[i] % 10);
                chars.push_back(ch);
            }
        }
    }
    return chars.size();
}
int compress(vector<char> &chars)
{
    int i = 0;
    int n = chars.size();
    int ansind = 0;
    while (i < n)
    {
        int j = i + 1;
        int count = 1;
        while (j < n && chars[i] == chars[j] )
        {
            count++;
            j++;
        }
        chars[ansind++] = chars[i];
        if (count > 1)
        {
            string s = to_string(count);
            for (char c : s)
            {
                chars[ansind++] = c;
            }
        }
        i = j;
    }
    return ansind;
}
int main()
{
    vector<char> ch = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int n=compress(ch);
    for (int i = 0; i < n; i++)
    {
        cout << ch[i] << "";
    }

    return 0;
}