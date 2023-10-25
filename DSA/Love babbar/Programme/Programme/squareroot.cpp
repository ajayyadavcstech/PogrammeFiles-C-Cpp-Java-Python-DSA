#include <iostream>
using namespace std;

int squareroot(int s, int e, int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    if (s > e)
        return -1;

    int mid = (s + e) / 2;
    if ((mid * mid) <= n && n < (mid + 1) * (mid + 1))
    {
        return mid;
    }
    else if ((mid * mid) < n)
    {
        return squareroot(mid + 1, e, n);
    }
    else
        return squareroot(s, mid - 1, n);
}
int main()
{
    for(int i=0;i<100;i++){
    cout << i<<" "<<squareroot(0,i-1,i)<<endl;
    }

    return 0;
}