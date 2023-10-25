#include <iostream>
#include <string>
#include <math.h>
using namespace std;
string DecimalToHexadecimal(int n)
{
    string ans = "";
    int a = 1;
    while (n >= a)
    {
        a *= 16;
    }
    while (a > 0)
    {
        int lastdigit = n / a;
        n-=a*lastdigit;
        if (lastdigit >= 0 && lastdigit <= 9)
        {
            lastdigit = lastdigit + '0';
            ans.push_back(lastdigit);
        }
        else if (lastdigit >= 10 && lastdigit <= 15)
        {
            lastdigit = lastdigit-10 + 'A';
            ans.push_back(lastdigit);
        }
        a/=16;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << DecimalToHexadecimal(n);

    return 0;
}