#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while (n>0)
    {
        n=(n & n-1);
        count++;
    }
    cout<<count;
    
    return 0;
}