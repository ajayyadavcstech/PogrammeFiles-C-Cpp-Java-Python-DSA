#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    char a[n + 1];
    cin >> a;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (a[i] != a[j])
        {
            cout << "Lool not a palinderome !";
            return 0;
        }
        i++;j--;
    }
    cout << "Its palindrome";

    return 0;
}