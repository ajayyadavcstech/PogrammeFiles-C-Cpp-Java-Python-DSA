#include<iostream>
using namespace std;
int nested(int n)
{
    if (n>100)
    {
        return n-10;
    }
    else
    return nested(nested(n+11));
    
}
int main()
{
    int n;
    cin>>n;
    cout<<nested(n);
    
    return 0;
}