#include <iostream>
#include<string.h>
using namespace std;
void reverse(string n)
{
    for (int i = 0; i < n.length() / 2; i++)
    {
        int swap = n[i];
        n[i] = n[n.length() - 1 - i];
        n[n.length() - 1 - i] = swap;
    }
    for (int i = 0; i < n.length(); i++)
    {
        cout << n[i];
    }
}
void revers(string n)
{
    if (n.length()==0)
    {
        return;
    }
    

    cout << n[n.length() - 1];
    revers(n.substr(0,n.length()-1));
}
int main()
{
    string n;
    cin >> n;
    revers(n);

    return 0;
}