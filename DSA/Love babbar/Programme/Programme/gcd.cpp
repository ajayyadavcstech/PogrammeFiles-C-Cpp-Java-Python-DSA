#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int n = min(a, b);
    for (int i = n; i >= 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}
int lcm(int a, int b)
{
    int Hcf = gcd(a, b);
    int Lcm = a * b / Hcf;
    return Lcm;
}
int main()
{
    int a;
    int b;
    cout << "Enter a and b ";
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b);

    return 0;
}