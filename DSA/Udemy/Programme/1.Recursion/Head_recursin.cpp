#include<iostream>
using namespace std;
void head(int n)
{
    if (n>0)
    {
        head(n-1);// head recursion
        cout<<n<<" ";
    }
    
}
void head1(int n)
{
    int i=1;
    
    while (i<=n)
    {
        cout<<i<<" ";
        i++;//conerted into loop which takes less size
    }
    
}
int main()
{
    int n;
    cin>>n ;
    head1(n);
    
    return 0;
}