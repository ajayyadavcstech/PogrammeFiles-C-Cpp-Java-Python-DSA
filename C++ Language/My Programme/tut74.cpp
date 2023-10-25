#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    //Function Objects(Functor) : Function wrapped in a class so that it is available like an object
    int arr[]={1,84,45,57,8,39,9};
    sort(arr,arr+7);
    // sort(arr,arr+7,greater<int>()); arrange in decending order
    for (int  i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}