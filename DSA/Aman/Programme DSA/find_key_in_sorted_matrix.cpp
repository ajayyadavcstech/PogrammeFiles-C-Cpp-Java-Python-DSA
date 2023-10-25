#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;
    int i = 0;
    int j = m - 1;
    int check = 0;
    while (i < n && j > 0)
    {
        if (arr[i][j] == k)
        {
            check = 1;
            break;
        }
        else if (arr[i][j] > k)
        {
            i--;
        }
        else
            j++;
    }
    if (check == 0)
    {
        cout << "not found";
    }
    else
        cout << "found";

    return 0;
}