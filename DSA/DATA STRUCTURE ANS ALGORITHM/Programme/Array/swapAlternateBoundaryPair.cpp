#include<iostream>
using namespace std;

void swapAlternateBoundaryePair(int *arr,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i=i+2;
        j=j-2;
    }
}
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    swapAlternateBoundaryePair(arr,6);
    print(arr,6);
    

    return 0;
}