#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    sort(a.begin(),a.end(),greater<char>());
    cout<<a;

}
