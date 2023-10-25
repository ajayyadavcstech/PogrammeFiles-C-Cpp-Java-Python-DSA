#include<iostream>
using namespace std;
void abc(char s[])
{
    if (s[0]=='\0')
    {
        return;
    }
    cout<<s[0];
    abc(s+1);
    abc(s+1);
    
}
int main()
{
    char s[30];
    cin>>s;
    abc(s);
    
    return 0;
}