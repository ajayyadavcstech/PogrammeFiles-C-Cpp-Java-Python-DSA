#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= 1 && j <= i - 1)
                cout << "  ";
            if (j >= i && j <= n)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}