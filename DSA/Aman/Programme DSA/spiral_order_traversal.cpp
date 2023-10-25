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
    int row_s = 0;
    int row_e = n - 1;
    int col_s = 0;
    int col_e = m - 1;
    while (row_s <= row_e && col_s <= col_e)
    {
        for (int i = col_s; i <= col_e && col_s<=col_e; i++)
        {
            cout << arr[row_s][i] << " ";
        }
        row_s++;
        for (int i = row_s; i <= row_e && row_s<=row_e; i++)
        {
            cout << arr[i][col_e]<<" ";
        }
        col_e--;
        for (int i = col_e; i >= col_s && col_s<=col_e; i--)
        {
            cout << arr[row_e][i]<<" ";
        }
        row_e--;
        for (int i = row_e; i >= row_s && row_s<=row_e; i--) 
        {
            cout << arr[i][col_s]<<" ";
        }
        col_s++;
    }

    return 0;
}