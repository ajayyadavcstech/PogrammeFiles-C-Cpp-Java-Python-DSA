#include <iostream>
#include<string>
using namespace std;
string x, mai;

void moveXtoLast(string n)
{
    if (n.length() == 0)
        return ;
    if (n[0] == 'x' || n[0] == 'X')
    {
        x.push_back(n[0]);
        moveXtoLast(n.substr(1));
    }
    else
    {
        mai.push_back(n[0]);
        moveXtoLast(n.substr(1));
    }
}
int main()
{
    string n;
    cin >> n;
    moveXtoLast(n);
    cout << mai.append(x)<<endl;
    cout << mai;
    return 0;
}