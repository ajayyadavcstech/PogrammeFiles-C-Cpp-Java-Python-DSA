#include <iostream>
#include <math.h>
using namespace std;

void binary_to_decimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem == 1)
            ans += pow(2, i);
        i++;
        n/=10;
    }
    cout << ans;
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    binary_to_decimal(n);

    return 0;
}