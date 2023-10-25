#include <iostream>
using namespace std;

int main()
{
    string str = "abaacdddddacd";
    int fre[26];
    for (int i = 0; i < 26; i++)
    {
        fre[i]=0;
    }
    
    for (int i = 0; i < str.length(); i++)
    {
       fre[str[i]-'a']++;
    }
    int ans;
    char a; 
    for (int i = 0; i < 26; i++)
    {
        if (fre[i]>ans)
        {
            ans=fre[i];
            a='a'+i;
        }
         
    }
    cout<<ans<<" "<<a;

    return 0;
}