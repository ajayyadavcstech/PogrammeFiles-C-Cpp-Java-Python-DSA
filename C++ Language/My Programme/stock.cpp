#include<iostream>
using namespace std;

int main()
{
    int n,maxprofit=0,profit=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if(array[i]<array[j])
          {
              profit=array[j]-array[i];
          }
          if(profit>maxprofit)
          {
              maxprofit=profit;
          }
      }
    }
    cout<<maxprofit;

    return 0;
}