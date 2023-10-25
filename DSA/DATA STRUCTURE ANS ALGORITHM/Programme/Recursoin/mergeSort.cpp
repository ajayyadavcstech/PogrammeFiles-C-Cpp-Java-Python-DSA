#include <iostream>
using namespace std;
#include <vector>
void merge(vector<int> &v, int s, int e, int mid)
{
    vector<int> v1(v.begin() + s, v.begin() + mid + 1);

    vector<int> v2(v.begin() + mid + 1, v.begin() + e + 1);

    int i = 0;
    int j = 0;
    int k = s;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            v[k] = v1[i];
            k++;
            i++;
        }
        else
        {
            v[k] = v2[j];
            k++;
            j++;
        }
    }
    while (i < v1.size())
    {
        v[k] = v1[i];
        k++;
        i++;
    }
    while (j < v2.size())
    {
        v[k] = v2[j];
        k++;
        j++;
    }
}
void mergeSort(vector<int> &v, int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);
    merge(v, s, e, mid);
}
int main()
{
    vector<int> v = {2, 1, 5, 3, 7, 6, 9, 8};
    mergeSort(v, 0, v.size() - 1);
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}