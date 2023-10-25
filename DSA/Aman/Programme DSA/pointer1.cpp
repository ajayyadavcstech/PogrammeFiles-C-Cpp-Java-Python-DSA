#include <iostream>
using namespace std;
void print(int n,int m,int p[][])
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}

int main()
{
    // int *a=new int [9];
    // // for (int i = 0; i < 9; i++)
    // // {
    // //     cin>>a[i];
    // // }
    // // print(a,9);
    // int *b=new int;
    // cin>>*b;
    // cout<<*b;
    int a[4][2] = {{1, 2}, {2, 3}, {5, 6}, {6, 7}};
    int *b[4];

    return 0;
}