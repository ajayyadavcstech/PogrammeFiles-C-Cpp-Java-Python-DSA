#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
   for (int  i = 1; i < n; i++)
   {
       int k=arr[i];
       int  j = i-1;
       for ( ; j >=0; j--)
       {
           if(k<arr[j])
           {
              arr[j+1]=arr[j];
           }
           else
           break;
       }
       arr[j+1]=k;
       
   }
   
}
int main()
{
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr,n);
   for (int  i = 0; i < n; i++)
   {
       cout<<arr[i]<<"  ";
   }
   
    
    return 0;
}