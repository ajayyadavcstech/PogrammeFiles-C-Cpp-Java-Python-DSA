#include<iostream>
using namespace std;

void fun(int arr[])
{
    cout<<"inside fun"<<endl;
    cout<<&arr<<" "<<&arr[0]<<" "<<arr<<endl;
}
int main()
{
    int arr[]={3,4,5,6};
    cout<<&arr<<" "<<&arr[0]<<endl;
    fun(arr);

    return 0;
}