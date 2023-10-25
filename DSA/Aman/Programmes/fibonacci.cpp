#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int n,t1=0,t2=1,sum=0;
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        sum=add(t1,t2);
        t1=t2;;
        t2=sum;
        

    }
    
    return 0;
}