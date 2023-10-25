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
    int max_sum=INT32_MIN;
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=0;
        for (int  j = i; j < n; j++)
        {
            sum=sum+a[j];
            max_sum=max(max_sum,sum);
        }
        
    }
    cout<<max_sum;
    
    
    return 0;
}