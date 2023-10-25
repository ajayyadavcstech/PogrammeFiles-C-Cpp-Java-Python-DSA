#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 1e3;
    int in[N];
    for (int i = 0; i < N; i++)
    {
        in[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=0)
        {
            in[a[i]] = 1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (in[i] == 0)
        {
            cout << i;
            return 0;
        }
    }
    cout << "lool";

    return 0;
}