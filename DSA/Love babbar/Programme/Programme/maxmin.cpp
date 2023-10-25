#include <iostream>
using namespace std;

void maxmin(int a[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Max value is : " << max << endl;
    cout << "Min value is : " << min << endl;
}
int main()
{
    int a[]={5,6,1,8,3};
    maxmin(a,5);

    return 0;
}