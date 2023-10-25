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
    int sum=0;
    int max_sum=INT32_MIN;
    for (int  i = 0; i < n; i++)
    {
        sum+=a[i];
        if(sum<0)
        sum=0;
        max_sum=max(max_sum,sum);
    }
    cout<<max_sum;
    
    
    return 0;
}