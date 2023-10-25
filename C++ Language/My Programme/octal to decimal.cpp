#include<iostream>
#include<math.h>
using namespace std;
int otd(int a)
{
   int r,sum=0;
   int i=0;
   while(a!=0)
   {

     r=a%10;
     sum=sum+r*pow(8,i);
     i++;
     a=a/10;

   }
   return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<otd(n);
}
