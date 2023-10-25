#include <iostream>
using namespace std;

void spiralprint(int arr[][4], int n, int m)
{
    int row_s = 0;
    int row_e = n - 1;
    int col_s = 0;
    int col_e = m - 1;
    while (row_s <= row_e || col_s <= col_e) //here you can alse use count=0: while(count<m*n)
    {
        int i = col_s;
        while (i <= col_e && row_s <= row_e )
        {
            cout << arr[row_s][i++] << " ";
        }
        row_s++;
        i = row_s;
        while (i <= row_e && col_s <= col_e)
        {
            cout << arr[i++][col_e] << " ";
        }
        col_e--;
        i = col_e;
        while (i >= col_s && row_s <= row_e)
        {
            cout << arr[row_e][i--] << " ";
        }
        row_e--;
        i = row_e;
        while (i >= row_s && col_s <= col_e)
        {
            cout << arr[i--][col_s] << " ";
        }
        col_s++;
    }
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12};
    spiralprint(arr, 3, 4);

    return 0;
}