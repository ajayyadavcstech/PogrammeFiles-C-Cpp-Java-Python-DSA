#include <iostream>
#include <algorithm>
using namespace std;
int triplet(int a[], int n, int x)
{
    int s, e;
    int count = 0;
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
    {
        s = i + 1;
        e = n - 1;
        while (s < e)
        {
            if ((a[i] + a[s] + a[e]) == x)

            {
                count++;
                s++;
            }
            else if ((a[i] + a[s] + a[e]) > x)
                e--;
            else if ((a[i] + a[s] + a[e]) < x)
                s++;
        }
    }
    return count;
}
int testcase()
{
  cout << "Enter size of element" << endl;
    int n;
    cin >> n;
    int a[n];
    cout << "enter all element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "enter total sum" << endl;
    cin >> x;
    return triplet(a, n, x);
}
int main()
{
    int t;
    cout<<"enter no of test case"<<endl;
    cin>>t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        a[i]=testcase();
    }
    for (int i = 0; i < t; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    

    return 0;
}