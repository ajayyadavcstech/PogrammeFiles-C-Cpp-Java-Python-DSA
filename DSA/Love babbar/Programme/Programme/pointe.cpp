#include<iostream>
using namespace std;
void update(int arr[])
{
    cout<<sizeof(arr)<<endl;
    int ar[5];
    cout<<sizeof(ar)<<endl;
}
void update(int arr[][2])
{
    cout<<"2d array in funaction "<<sizeof(arr)<<endl;
    int arr2[2][4];
    cout<<"2d array created in fun "<<sizeof(arr2)<<endl;

}

int main()
{
//     char arr[]="abcde";
//     char *p=arr;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     p++;
//     cout<<p<<endl;
//     cout<<*p<<endl;

    int arr[6];
    cout<<sizeof(arr)<<endl;
    update(arr);

    int arr2[][2]={1,2,3,4,5,6};
    cout<<"2d size in main "<<sizeof(arr)<<endl;
    update(arr2);


    return 0;
}