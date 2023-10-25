#include <iostream>
using namespace std;

int decimal_to_binary(int n)
{
    int binary = 0;
    int max = 1;
    while (max <= n)
    {
        max = max * 2;
    }
    max /= 2;
    while (max > 0)
    {
        int quotient = n / max;
        binary = binary * 10 + quotient;
        n = n - max * quotient;
        max /= 2;
    }
    return binary;
}
int decimal_to_octal(int n)
{
    int ans = 0;
    int max = 1;
    while (max <= n)
    {
        max *= 8;
    }
    max /= 8;
    while (max > 0)
    {
        int quotient = n / max;
        ans = ans * 10 + quotient;
        n -= max * quotient;
        max /= 8;
    }
    return ans;
}

string decimal_to_hexadecimal(int n)
{
    string ans="";
    int max = 1;
    while (max <= n)
    {
        max *= 16;
    }
    max /= 16;
    while (max > 0)
    {
        int quotient = n / max;
        if (quotient <= 9)
        {
            ans=ans+to_string(quotient);
        }
        else
        {
            char a = (quotient - 9) + ('a' - 1);
            ans.push_back(a);
        }
        n-=max*quotient;
        max/=16;
    }
    return ans;
}

int main()
{
    // int decimal;
    // cin>>decimal;
    // cout<<decimal_to_binary(decimal);

    // int decimal;
    // cin >> decimal;
    // cout << decimal_to_octal(decimal);

    int decimal;
    cin>>decimal;
    cout<<decimal_to_hexadecimal(decimal);
    return 0;
}