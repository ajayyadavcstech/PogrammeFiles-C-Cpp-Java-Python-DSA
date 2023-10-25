#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int csa[n+1];//cumulative sum array
    csa[0]=0;
    for (int  i = 0; i < n; i++)
    {
        csa[i+1]=csa[i]+a[i];
    }
    int max_sum=INT32_MIN;
    int sum;
   for (int  i = 1; i <= n; i++)
   {
       sum=0;
       for (int  j = 0; j <i; j++)
       {
          sum=csa[i]-csa[j];
          max_sum=max(max_sum,sum);
       }
       
   }
   cout<<max_sum;
   
    
    
    
    return 0;
}