#include <iostream>
using namespace std;
#include <vector>

void binary(int n, vector<char> &ar)
{
    if (n == 0)
        return;

    int bit = n & 1;
    if (bit == 0)
        ar.push_back('0');
    else
        ar.push_back('1');

    binary(n >> 1, ar);
}
bool check(vector<char> arr, int s, int e)
{

    if (s >= e)
        return true;
    if (arr[s] != arr[e])
        return false;

    return check(arr, ++s, --e);
}
bool checkpalindrome(int n)
{
    vector<char> arr;
    binary(n, arr);
    return check(arr, 0, arr.size() - 1);
}
int main()
{
    int n = 4;
    cout << checkpalindrome(n);

    return 0;
}