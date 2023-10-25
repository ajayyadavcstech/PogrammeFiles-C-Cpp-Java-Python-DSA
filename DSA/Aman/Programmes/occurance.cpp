//find first and last occurance of an array 
#include<iostream>
using namespace std;
int lastoccurance(int a[],int n,int k ,int i)
{
    if(n==i)
    return -1;
    int ans=lastoccurance(a,n,k,i+1);
    if(ans!=-1)
    {
        return ans;
    }
    if(a[i]==k)
    return i;
    return -1;
}
int firstoccurance(int a[],int n,int k,int i)
{
    if(n==i)
    return -1;
    if(a[i]==k)
    return i;
    return firstoccurance(a,n,k,i+1);
}
int main()
{
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i=0;
    cout<<"Enter key to find"<<endl;
    int k;
    cin>>k;
    cout<<firstoccurance(a,n,k,i)<<" "<<lastoccurance(a,n,k,i);

    
    return 0;
}