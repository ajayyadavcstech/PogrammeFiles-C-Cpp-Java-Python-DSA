#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    transform(a.begin(),a.end(),a.begin(),::toupper);
    cout<<a<<endl;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    cout<<a;
}
