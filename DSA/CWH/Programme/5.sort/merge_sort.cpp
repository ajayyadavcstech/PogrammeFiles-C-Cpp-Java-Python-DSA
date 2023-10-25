// it is used to merge to sorted array
#include <iostream>
using namespace std;
int* merge_sort(int a[], int b[], int n, int m)
{
    int *merge=new int[n+m];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            merge[k] = a[i];
            i++;
            k++;
        }
        else
        {
            merge[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        merge[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        merge[k] = b[j];
        j++;
        k++;
    }
    return merge;
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[4] = {1, 4, 7, 9};
    int b[] = {2, 3, 6, 8, 12};
    int n = 4, m = 5;
    print(a, n);
    print(b, m);
    int *c = merge_sort(a,b,n,m);

    print(c, n + m);
    return 0;
}