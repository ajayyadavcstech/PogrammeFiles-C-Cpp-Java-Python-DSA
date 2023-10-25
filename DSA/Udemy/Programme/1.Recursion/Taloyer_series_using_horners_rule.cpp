#include<iostream>
using namespace std;
double e(int x,int n)
{
    double sum=1;
    while (n>0)
    {
        sum=1+(x*(1.0)/n)*sum;//using loop(iteration)
        n--;
    }
    return sum;
    
}
double e1(int x,int n)
{
 static int i=0;
   if (n==0)
   {
       return 1;
   }
  
   i++;
   return 1+(x*(1.0)/i)*e1(x,n-1);// at returning time(recurssion)
}
double e2(int x,int n)
{
    static double sum=1;
   if (n==0)
   {
       return sum;
   }
   sum=1+(x*(1.0)/n)*sum; // at callimg time(recurssion)
  return e2(x,n-1);

  
}
int main()
{
    for (int i = 1; i < 10; i++)
    {
    cout<<e(1,i)<<endl; // Here there is no static variable so we are getting wright ans
   // cout<<e1(1,i)<<endl;  //here don't use loop because after first call static variable updated and in second call update value start adding so we are gatting wrong ans 
   // cout<<e2(1,i)<<endl; //here don't use loop because after first call static variable updated and in second call update value start adding so we are gatting wrong ans 
        
    }
    
    
    return 0;
}