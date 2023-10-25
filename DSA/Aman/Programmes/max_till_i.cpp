#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maximum=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum=max(maximum,arr[i]);
        cout<<maximum<<"  ";
    }
    
    
    return 0;
}