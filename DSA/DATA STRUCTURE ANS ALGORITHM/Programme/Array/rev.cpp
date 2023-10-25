#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
bool comp(vector<int> a, vector<int> b)
{
    if (a[0] != b[0])
        return a[0] < b[0];
    else
        return a[1] <= b[1];
}
int main()
{
    vector<vector<int>> v(4, vector<int>(2));
    cout << "Enter Elements of vector " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> v[i][j];
        }
    }
    sort(v.begin(), v.end(), comp);
    cout << "Elements of vector : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}