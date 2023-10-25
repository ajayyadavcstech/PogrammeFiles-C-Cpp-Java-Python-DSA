#include <iostream>
#include <cstring>
using namespace std;
int getsize(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void upper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
}
bool palindrome(char s[])
{
    upper(s);
    int st = 0;
    int e = getsize(s) - 1;
    while (st < e)
    {
        if ((s[st] >= 'A' && s[st] <= 'Z' || s[st] >= '0' && s[st] <= '9') && (s[e] >= 'A' && s[e] <= 'Z' || s[e] >= '0' && s[e] <= '9'))
        {
            if (s[st++] != s[e--])
                return false;
        }
        else if ((s[st] >= 'A' && s[st] <= 'Z' || s[st] >= '0' && s[st] <= '9'))
        {
            e--;
        }
        else
            st++;
    }
    return true;
}
int main()
{
    cout << "Enter name ";
    char s[20];
    cin >> s;
    cout<<palindrome(s);


    return 0;
}