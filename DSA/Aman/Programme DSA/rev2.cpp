#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    for (int i = 0; i < 9; i++)
    {
        arr.push_back(4 + i);
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it=arr.begin();
    cout<<*it<<endl;
    it=arr.end();
    cout<<*(it-1);

    

    return 0;
}