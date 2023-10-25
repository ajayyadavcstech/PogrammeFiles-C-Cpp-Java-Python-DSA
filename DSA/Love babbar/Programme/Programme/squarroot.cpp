#include <iostream>
using namespace std;

int sqrtfloor(long long int N)
{
    // Write your code here.
    long long int s = 1;
    long long int e = N / 2;
    if (N == 0 || N == 1)
    {
        return N;
    }
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        if (mid > (INT64_MAX / mid))
        { //checking for mid*mid>INT64_MAX;
            e = mid - 1;
            continue;
        }
        long long int sqr = mid * mid;
        long long int rightsqr = (mid + 1) * (mid + 1);
        if (mid * mid <= N && N < (mid + 1) * (mid + 1))
        {
            return mid;
        }
        else if (mid * mid < N)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}
float sqrt(long long int n, int pre)
{
    float ans = sqrtfloor(n);
    float factor = 1;
    for (int i = 0; i < pre; i++)
    {
        factor /= 10;
        for (int i = 0; i < 10; i++)
        {
            if ((ans+factor) * (ans+factor) < n)
                ans = ans + factor;
            else
                break;
        }
    }
    return ans;
}
int main()
{
    long long int n;
    cout << "Enter n : ";
    cin >> n;
    cout << sqrt(n, 3)<<endl;

    return 0;
}