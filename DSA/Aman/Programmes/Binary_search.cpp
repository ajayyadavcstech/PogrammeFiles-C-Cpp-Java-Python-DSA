#include<iostream>
using namespace std;
int Binary_search(int arr[],int k,int n)
{
   int first_element=0 ,last_element=n-1,mid_element=(n-1)/2;
while (first_element<=last_element)
{
    if(arr[mid_element]==k)
    {
        return mid_element;
    }
    else if(k>arr[mid_element])
    {
        first_element=mid_element+1;
        mid_element=(first_element+last_element)/2;
    }
    else
    {
        last_element=mid_element-1;
        mid_element=(first_element+last_element)/2;
    }
}
return -1;


   

}
int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    int k;
    cin>>k;
    cout<<Binary_search(arr,k,n);
    
    return 0;
}