#include<iostream>
#include<math.h>
using namespace std;
bool prime(int a);
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for (int i=n1;i<=n2;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
}
bool prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
