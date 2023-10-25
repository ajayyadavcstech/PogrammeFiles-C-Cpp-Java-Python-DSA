#include <iostream>
using namespace std;
string Replacepi(string n)
{
    if (n.length() == 0)
        return "";
    if (n[0] == 'p' && n[1] == 'i')
    {
        string replace = Replacepi(n.substr(2));
        return replace = "3.14" + replace;
    }
    else
    {
        string replace = Replacepi(n.substr(1));
        return replace = n[0] + replace;

    }
}
int main()
{
    string n;
    cin >> n;
    cout << Replacepi(n);
    return 0;
}