#include <iostream>
using namespace std;
int DecimalToBinary(int n)
{
    int a = 1, ans = 0;
    while (a <= n)
    {
        a *= 2;
    }
    while (a > 0)
    {
        int lastdigit=n/a;
        n=n-a*lastdigit;
        ans=ans*10+lastdigit;
        a/=2;

    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << DecimalToBinary(n);
    return 0;
}