#include <iostream>
#include<math.h>
using namespace std;
float sqrt(int n)
{
    int s = 0;
    int e = n;
    float ans = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        int square = mid * mid;
        if (square == n)
            return mid;
        else if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        float pre = 1/pow(10, i);
        for(int j=0;j<=9;j++){
        cout<<ans<<endl;
            float val = ans + pre*j;
            float sqare = val*val;
            if(sqare <= n){
                ans = sqare ;
            }
            else
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << sqrt(n) << endl;

    return 0;
}