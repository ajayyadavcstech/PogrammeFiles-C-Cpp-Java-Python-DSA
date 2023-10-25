#include <iostream>
#include <cstring>
using namespace std;
string reverse(string n)
{
    static string rev;
    if (n.length() == 0)
        return rev;

    reverse(n.substr(1));
    rev.push_back(n[0]);
    return rev;
}
int main()
{
    string n;
    getline(cin, n);
    cout << reverse(n);
    return 0;
}