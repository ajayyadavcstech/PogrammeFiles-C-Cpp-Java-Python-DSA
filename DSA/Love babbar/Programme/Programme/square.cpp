#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b & 1)
    {
        return power(a * a, b / 2) * a;
    }
    else
        return power(a * a, b / 2);
}
int main()
{
    cout << power(10, 5);

    return 0;
}