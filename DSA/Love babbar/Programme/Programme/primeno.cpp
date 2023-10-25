#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    cout<<"Enter no";
    int n;
    cin>>n;
    int i=2;
    for(;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            cout<<"No is not a prime";
            break;
        }
    }
    if (i>sqrt(n))
    {
        cout<<"No is prime";
    }
    return 0;
}