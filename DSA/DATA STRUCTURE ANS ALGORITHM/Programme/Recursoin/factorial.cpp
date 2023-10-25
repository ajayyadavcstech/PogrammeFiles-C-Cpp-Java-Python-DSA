#include <iostream>
using namespace std;
#include <vector>
int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
void head(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    head(n - 1);
}
void tail(int n)
{
    if (n == 0)
        return;
    tail(n - 1);
    cout << n << endl;
}
int pow(int n, int i)
{
    if (i == 0)
        return 1;
    return n * pow(n, i - 1);
}
int fibbo(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibbo(n - 1) + fibbo(n - 2);
}
bool isSorted(vector<int> &v, int n)
{
    if (n == 0 || n == 1)
        return true;
    if (v[n - 1] < v[n - 2])
        return false;
    return isSorted(v, n - 1);
}
int binarysearch(vector<int> &v, int s, int e, int val)
{
    if (s > e)
        return -1;
    int mid = s + e / 2;
    if (v[mid] == val)
        return mid;
    if (v[mid] > val)
    {
        return binarysearch(v, s, mid - 1, val);
    }
    else
        return binarysearch(v, mid + 1, e, val);
}
void reverse(string &s)
{
    if (s.size() == 0)
        return;
    char st = s[0];
    s.erase(s.begin());
    reverse(s);
    s.push_back(st);
}
int power(int a, int b)
{
    if (b == 0)
        return 1;

    int ans = power(a, b / 2);
    if (b % 2 == 0)
        return ans * ans;
    else
        return a * ans * ans;
}
void bubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}
void insertionSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;
    insertionSort(arr, n - 1);
    int val = arr[n - 1];
    int i = n - 2;
    while (i >= 0 && arr[i] > val)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
}
int main()
{
    cout << factorial(5) << endl;
    cout << "Head " << endl;
    head(10);
    cout << "Tail : " << endl;
    tail(10);
    cout << pow(5, 2) << endl;
    cout << fibbo(6) << endl;
    vector<int> v = {1, 2, 3, 9, 4, 5};
    cout << isSorted(v, v.size()) << endl;
    cout << binarysearch(v, 0, v.size() - 1, 10) << endl;
    string s = "ajju";
    reverse(s);
    cout << s << endl;
    cout << power(2, 10) << endl;
    vector<int> arr = {3, 2, 1, 5, 4, 7, 5};
    insertionSort(arr, arr.size());
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}