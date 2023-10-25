#include<iostream>
using namespace std;
bool checksort(int a[],int n)
{
  if(n==1)
  return true;
  
  return (a[1]>a[0] && checksort(a+1,n-1));
  
  
 
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(checksort(a,n))
    {
        cout<<"Array is sorted:";
    }
    else
    cout<<"Array not sorted";
    
    
    return 0;
}