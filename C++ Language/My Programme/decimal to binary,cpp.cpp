#include<iostream>
#include<math.h>
using namespace std;
int dtb(int a)
{
    int sum=0,rev=0;
   while(a!=0)
   {
       int r;
       r=a%2;
       sum=sum*10+r;
       a=a/2;
   }
   while(sum!=0)
   {
       int r;
       r=sum%10;
       rev=rev*10+r;
       sum/=10;
   }
   return rev;
}
int main()
{
    int n;
    cin>>n;
    cout<<dtb(n);
}
