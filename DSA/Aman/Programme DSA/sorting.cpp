#include <iostream>
using namespace std;

void selectionsort(int n, int a[]) //selecting minimum element in an array and swapping with first element
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        int swap = a[i];
        a[i] = a[min];
        a[min] = swap;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void bubblesort(int n, int a[])
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void insertionsort(int n,int a[])
{
       
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubblesort(n, a);

    return 0;
}