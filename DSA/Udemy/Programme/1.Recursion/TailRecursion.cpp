#include<iostream>
using namespace std;
void tail(int n)
{
    if (n>0)
    {
        cout<<n<<" ";
        tail(n-1);// tail recursion
    }
    
}
void tail1(int n)
{
    
    while (n>0)
    {
        cout<<n<<" ";
        n--;//conerted into loop which takes less size
    }
    
}
int main()
{
    int n;
    cin>>n ;
    tail1(n);
    
    return 0;
}