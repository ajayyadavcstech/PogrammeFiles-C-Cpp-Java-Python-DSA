#include <iostream>
using namespace std;
#include <stack>
string rev(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = st.top();
        st.pop();
    }
    return s;
}
int main()
{
    cout << "Enter String : ";
    string s;
    cin >> s;

    cout << "Reversed String : ";
    s = rev(s);
    cout << s;

    return 0;
}