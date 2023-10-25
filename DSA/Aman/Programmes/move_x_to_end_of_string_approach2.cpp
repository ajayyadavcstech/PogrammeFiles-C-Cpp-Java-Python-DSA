#include <iostream>
#include<string>
using namespace std;

string moveXtoLast(string n)
{
    if (n.length() == 0)
        return "";
    if (n[0]=='x')
    {
        string ans=moveXtoLast(n.substr(1));
        return ans+n[0];
    }
    string ans=moveXtoLast(n.substr(1));
    return n[0]+ans;

        
    
}
int main()
{
    string n;
    cin >> n;
    cout << moveXtoLast(n);
    return 0;
}