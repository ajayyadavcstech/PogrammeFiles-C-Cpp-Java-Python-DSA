//Given an sorted array A of size N of non-negative intergers,fing a continuous subarray which adds to a giban number S.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    int i = 0;
    int j = 0;
    int current_sum = 0;
    int st=-1,e=-1;
    while (j < n && i <= j)
    {
        if (current_sum + a[j] == s)
        {
            st=i;
            e=j;
            break;
        }
        else if (current_sum + a[j] > s)
        {
            current_sum -= a[i];
            i++;
        }
        else
        {
            current_sum += a[j];
            j++;
        }
    }
    if (st==-1 && e==-1)
    {
        cout<<-1;
    } 
    else
    cout<<i<<" "<<j;

    return 0;
}