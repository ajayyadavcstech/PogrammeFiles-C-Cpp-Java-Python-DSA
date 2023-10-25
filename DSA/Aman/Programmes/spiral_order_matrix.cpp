#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of a 2d array" << endl;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int start_row = 0;
    int end_row = n - 1;
    int start_column = 0;
    int end_column = m - 1;
    while ((start_row <= end_row) && (start_column <= end_column))
    {

        for (int i = start_column; i <= end_column; i++)
        {
            cout << a[start_row][i] << " ";
        }
        start_row++;
        for (int i = start_row; i <= end_row; i++)
        {
            cout << a[i][end_column] << " ";
        }
        end_column--;
        if ((start_row <= end_row))
        {
            for (int i = end_column; i >= start_column; i--)
            {
                cout << a[end_row][i] << " ";
            }
        }
        end_row--;
        if ((start_column <= end_column))
        {
            for (int i = end_row; i >= start_row; i--)
            {
                cout << a[i][start_column] << " ";
            }
        }
        start_column++;
    }

    return 0;
}