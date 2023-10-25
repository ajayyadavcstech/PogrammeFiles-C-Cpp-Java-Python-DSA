#include<stdio.h>
int main()
{
    int a,b,lcm=1,i=2;
    scanf("%d%d",&a,&b);
    while(a!=1 || b!=1)
    {
       if(a%i==0 || b%i==0)
       {
          lcm=lcm*i;
          if(a%i==0)
            a=a/i;
          if(b%i==0)
            b=b/i;
       }
       if(a%i!=0 && b%i!=0)
       {
           i++;
       }
    }
    printf("%d",lcm);
}
