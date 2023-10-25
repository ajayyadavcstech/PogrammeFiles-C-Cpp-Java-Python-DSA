#include<iostream>
using namespace std;
int setbit(int a,int i)
{
    return (a | (1<<i));
}
int getbit(int a,int i)
{
    return (a & (1<<i));
}
int unique(int a[],int n)
{
    int result=0;
    for (int  i = 0; i < 64; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            if(getbit(a[j],i))
            {
                sum++;
            }
        }
        if(sum%3==1)
        {
           result= setbit(result,i);
        }
        
    }
    return result;
    
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
    cout<<unique(a,n);
    
    
    return 0;
}