#include<iostream>
#include<math.h>
using namespace std;
int OctalToDecimal(int n)
{
    int decimal=0;
    int i=0;
   while (n>0)
   {
       int r=n%10;
       decimal=decimal+pow(8,i)*r;
       n/=10;
       i++;

   }
   return decimal;
   
}
int main()
{
    int n;
    cin>>n;
    cout<<OctalToDecimal(n);
    return 0;
}