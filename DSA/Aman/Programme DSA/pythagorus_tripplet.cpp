#include <iostream>
using namespace std;

bool tripplet(int a, int b, int c)
{
    if ((a * a == b * b + c * c) || (c * c == b * b + a * a) || (b * b == a * a + c * c))
    {
        return true;
    }
    return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (tripplet(a, b, c))
    {
        cout << "Entered value is tripplet";
    }
    else
        cout << "not a tripplert";

    return 0;
}