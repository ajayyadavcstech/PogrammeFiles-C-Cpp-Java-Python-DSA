#include<iostream>
using namespace std;

void reverse(string &p,int s,int e)
{
    if(s>=e)
    return ;

    swap(p[s],p[e]);
    reverse(p,s+1,e-1);
}
int main()
{
    string s="ajay yadav";
    cout<<s<<endl;
    reverse(s,0,9);
    cout<<s;
    

    return 0;
}