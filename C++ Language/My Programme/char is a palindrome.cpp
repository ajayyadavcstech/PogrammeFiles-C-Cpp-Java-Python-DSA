#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cout<<"not a palindrome";
            return(0);
        }
    }
    cout<<"it is a palindrome";
}
