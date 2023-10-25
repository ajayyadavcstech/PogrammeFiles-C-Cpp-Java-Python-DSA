#include<iostream>
using namespace std;

void update(int arr[],int *p)
{
    cout<<"Inside fun "<<sizeof(arr)<<endl;
    cout<<"Inside fun "<<sizeof(p)<<endl;
    arr++;
    cout<<"value "<<*arr<<endl;
    cout<<*p;
}

int main()
{
   int arr[]={1,2,3,4,5};
   int *p=arr;
   cout<<*p<<endl;
   p++;
   cout<<*p<<endl;
   cout<<sizeof(p)<<endl;
   cout<<sizeof(arr)<<endl;
   cout<<*arr<<endl;
   update(arr,arr);
    return 0;
}