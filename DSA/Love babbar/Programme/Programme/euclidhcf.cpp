#include <iostream>
using namespace std;

int gcd(int a, int b) //using euclid algorithm
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    else
        return a;
}
int main()
{
    cout<<"Enter a and b ";
    int a;
    int b;
    cin>>a>>b;
    cout<<gcd(a,b);

    return 0;
}