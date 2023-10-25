#include<iostream>
using namespace std;
int kidensealgo(int a[],int n)
{
    int sum=0;
    int max_sum=INT32_MIN;
        for (int  i = 0; i < n; i++)
    {
        sum+=a[i];
        if(sum<0)
        sum=0;
        max_sum=max(max_sum,sum);
    }
    return max_sum;
}
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
    int wrapped_sum;
    int non_wrappes_sum;
    int Total_sum=0;
    non_wrappes_sum=kidensealgo(a,n);
    for (int  i = 0; i < n; i++)
    {
        Total_sum+=a[i];
        a[i]=-a[i];
    }
   wrapped_sum=Total_sum-(-kidensealgo(a,n));
   cout<<max(wrapped_sum,non_wrappes_sum); 

    
    

    return 0;
}