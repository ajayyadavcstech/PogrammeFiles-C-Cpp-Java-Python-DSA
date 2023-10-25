#include<iostream>
using namespace std;


int main()
{
    cout<<"Enter n";
    int n;
    cin>>n;
    int first=0;
    int second=1;
    for(int i=1;i<=n;i++)
    {
        cout<<first<<" ";
        int third=first+second;
        first=second;
        second=third;
    }

    return 0;
}