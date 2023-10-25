#include<iostream>
using namespace std;
string Replacepi(string n)
{
    static string  replace;
    if(n.length()==0)
    return replace;
    if (n[0]=='p' && n[1]=='i')
    {
         replace.append("3.14");
         Replacepi(n.substr(2));
    }
    else
    {
        replace.push_back(n[0]);
        Replacepi(n.substr(1));
    }
    return replace;
    
    
}
int main()
{
    string n;
    cin>>n;
    cout<<Replacepi(n);
    return 0;
}