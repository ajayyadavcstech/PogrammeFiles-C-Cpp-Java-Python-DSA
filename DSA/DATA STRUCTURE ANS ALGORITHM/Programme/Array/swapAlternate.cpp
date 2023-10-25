#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapalternate(int *arr,int n){
    for(int i=0;i<n-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    swapalternate(arr,6);
    print(arr,6);
    

    return 0;
}