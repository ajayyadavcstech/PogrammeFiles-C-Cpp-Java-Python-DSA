#include<iostream>
using namespace std;
void primesieze(int n)
{
    int a[n+1]={0};
    for (int i = 2; i <=n; i++)
    {
        if(a[i]==0)
        {
            for (int j = i*i; j <=n ; j+=i)
            {
                a[j]=1;
            }
            
        }
    }
    for (int  i = 2; i <= n; i++)
    {
        if(a[i]==0)
        cout<<i<<" ";
    }
    
    
}
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    primesieze(n);
    
    return 0;
}