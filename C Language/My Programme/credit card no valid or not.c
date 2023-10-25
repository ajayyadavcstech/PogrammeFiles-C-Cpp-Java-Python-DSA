#include<stdio.h>
int main()
{
    double c;
    int i,l,a[15],sum=0,l1;
    printf("enter 16 digit credit card no\n");
    scanf("%lf",&c);
    printf("%lf\n",c);

    c=c/10;

    for(i=0;i<=14;i++)
    {

       a[i]=l;
       c=c/10;
    }
    for(i=0;i<=14;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<=14;i++)
    {
       if((i+1)%2==1)
       {
           a[i]=2*a[i];
           if(a[i]>=9)
           {
               a[i]=a[i]-9;
           }
       }
    }
    for(i=0;i<=14;i++)
    {
        sum=sum+a[i];
    }

    l1=sum%10;
    if(l1==l)
    {
        printf("Heyy, Card is valid");
    }
    else
        printf("Card is not valid!");
}
