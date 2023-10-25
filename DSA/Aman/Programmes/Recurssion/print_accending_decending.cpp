#include<iostream>
using namespace std;
void print(int n)
{
    if (n>=1000)
    {
        return;
    }
    cout<<n<<" ";
    print(n*2);
    cout<<n<<" ";

    
}
int main()
{
    int n;
    cin>>n;
    print(n);
    
    return 0;
}