#include<iostream>
#include<string>
using namespace std;
string Removeduplicate(string n)
{
    static string duplicate;
    if (n.length()==0)   //Base Condition
    {
        return duplicate;
    }
    if (n[0]==n[1])
    {
        Removeduplicate(n.substr(1));
        return duplicate;
    }
    else
    {

       duplicate.push_back(n[0]);
        Removeduplicate(n.substr(1));

       return duplicate;
    }
    

    
}
int main()
{
    string n;
    cin>>n;
    cout<<Removeduplicate(n);
    return 0;
}