#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int b[5]={1,2,3,4,5};
    int c[5]={1,2};
    int d[5]={0};
    int e[]={1,2,3,4,5};
    int f[5]={-1};
    for (int  i = 0; i < 5; i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
      for (int  i = 0; i < 5; i++)
    {
        cout<<"b["<<i<<"]="<<b[i]<<endl;
    }
      for (int  i = 0; i < 5; i++)
    {
        cout<<"c["<<i<<"]="<<c[i]<<endl;
    }
      for (int  i = 0; i < 5; i++)
    {
        cout<<"d["<<i<<"]="<<d[i]<<endl;
    }
      for (int  i = 0; i < 5; i++)
    {
        cout<<"e["<<i<<"]="<<e[i]<<endl;
    }
      for (int  i = 0; i < 5; i++)
    {
        cout<<"f["<<i<<"]="<<f[i]<<endl;
    }
    
    return 0;
}