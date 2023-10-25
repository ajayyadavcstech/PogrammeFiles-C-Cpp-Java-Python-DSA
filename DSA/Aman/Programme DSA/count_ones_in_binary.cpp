//    7  = 1 1 1(n)
//    6  = 1 1 0(n-1)
// 7 & 6 = 1 1 0(n&n-1) (In every n&n-1 operation right most bit is cleared)
#include <iostream>
using namespace std;

int count_ones(int n)
{
    int i = 0;
    while (n > 0) //iterating till every bit removed
    {
        i++;               //counting bit 
        n = (n & (n - 1)); //removing single bit
    }
    return i;
}

int main()
{
    int n;
    cin >> n;
    cout << count_ones(n);

    return 0;
}