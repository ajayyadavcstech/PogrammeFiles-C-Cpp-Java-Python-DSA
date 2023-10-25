#include <iostream>
using namespace std;

int main()
{
    int x=1534236469;
    long long int rev = 0;
    while (x != 0)
    {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    cout<<rev<<endl;
    int a=rev;
    cout<<a;
    return 0;
}
