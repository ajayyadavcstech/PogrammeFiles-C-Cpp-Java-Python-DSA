#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = n; i >=2; i--)
    {
        ans = ((ans % 5) * (i % 5)) % 5;
    }
    return ans;
}
int main()
{

    cout << factorial(9);
    return 0;
}