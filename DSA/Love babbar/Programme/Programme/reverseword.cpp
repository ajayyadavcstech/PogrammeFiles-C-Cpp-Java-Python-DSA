#include <iostream>
using namespace std;
void reverse(string &s, int st, int e)
{
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
}
void reverseword(string &s)
{
    int st = 0;
    int e = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            e = i - 1;
            reverse(s, st, e);
            st = i + 1;
        }
    }
    reverse(s, st, s.length() - 1);
}

int main()
{
    string s="my name is ajay";
    reverseword(s);
    cout<<s;
  



    return 0;
}