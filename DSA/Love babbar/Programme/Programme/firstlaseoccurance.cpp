#include<iostream>
using namespace std;
//first occurance
int firstoccur(int *arr,int s,int e,int k)
{
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    int ans;
    if(arr[mid]==k){
        ans= mid;
        int temp=firstoccur(arr,s,mid-1,k);
        if(temp!=-1){
            ans=temp;
        }
    }
    else if(arr[mid]>k){
     return    firstoccur(arr,s,mid-1,k);
    }
    else
   return firstoccur(arr,mid+1,e,k);
    
    return ans;


}
int lastoccur(int *arr,int s,int e,int k)
{
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    int ans;
    if(arr[mid]==k){
        ans= mid;
        int temp=lastoccur(arr,mid+1,e,k);
        if(temp!=-1){
            ans=temp;
        }
    }
    else if(arr[mid]>k){
     return    lastoccur(arr,s,mid-1,k);
    }
    else
   return lastoccur(arr,mid+1,e,k);
    
    return ans;


}

int main()
{
    
    int arr[]={1,2,2,4,6};
    cout<<firstoccur(arr,0,4,2)<<endl;
    cout<<lastoccur(arr,0,4,2);
    

    return 0;
}