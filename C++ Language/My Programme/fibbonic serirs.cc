#include<iostream>
using namespace std;
void fibbo(int a)
{
    int t1=0,t2=1;
    int ne;
    for(int i=1;i<=a;i++)
    {
        cout<<t1<<endl;
        ne=t1+t2;
        t1=t2;
        t2=ne;

    }
}
int main()
{
    int n;
    cin>>n;
    fibbo(n);
}
