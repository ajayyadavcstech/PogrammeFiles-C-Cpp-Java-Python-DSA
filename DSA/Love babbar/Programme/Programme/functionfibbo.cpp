#include<iostream>
using namespace std;

int fibbo(int n)
{
    int first=0;
    int second=1;
    for(int i=1;i<=n;i++)
    {
        int next=first+second;
        first=second;
        second=next;
    }
    return first;
}
int main()
{
    int n;
    cout<<"Enter no"<<endl;
    cin>>n;
    cout<<fibbo(n);

    

    return 0;
}