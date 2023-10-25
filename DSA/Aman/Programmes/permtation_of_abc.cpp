#include<iostream>
using namespace std;
void permutation(string n,string ans)
{
    if (n.length()==0)
    {
        cout<<ans<<endl;
    }
    for (int i = 0; i < n.length(); i++)
    {
        permutation(n.substr(0,i)+n.substr(i+1),ans+n[i]);
    }
    
    
}
int main()
{
    string n,ans;
    cin>>n;
    permutation(n,ans);
    
    return 0;
}