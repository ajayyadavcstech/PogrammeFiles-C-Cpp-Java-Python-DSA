#include <iostream>   
#include <math.h>
#include <cstring>
using namespace std;
void binary_to_decimal_positive(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = bit * pow(10, i++) + ans;
        n = n >> 1;
    }
    cout << ans;
}
void binary_to_decimal_negative(int n) // in case of negative no left or right sift operator blank space is filled with 1 ...........;
{
    string ans;
    for (int i = 0; i < 32; i++)
    {
        int bit = n & 1;
        ans.append(to_string(bit));
        n = n >> 1;
    }
    int size = 32;
    for (int i = 0; i <= (size - 1) / 2; i++)
    {
        char ch = ans[i];
        ans[i] = ans[size - 1 - i];
        ans[size - 1 - i] = ch;
    }
    cout<<ans<<endl;
    // cout<<ans.size();
}
int main()
{
    int n;
    cout << "Enter n"<<endl;
    cin >> n;
    if (n >= 0)
    {
        binary_to_decimal_positive(n);
    }
    else
        binary_to_decimal_negative(n);

    return 0;
}