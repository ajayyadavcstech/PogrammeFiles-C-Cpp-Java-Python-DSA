#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    int mx = INT32_MIN, count = 0;
    int i=0;
    for (; i < n - 1; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            count++;
            mx = arr[i];
            cout << i + 1 << " : " << arr[i]<<endl;
        }
    }
    if (arr[i] > mx)
    {
        count++;
        mx = arr[i];
        cout << i + 1 << " : " << arr[i]<<endl;
    }
    cout<<count;

    return 0;
}