#include<stdio.h>
int main()
{
    int i,r,n,mul;
    for(i=100;i<=200;i++)
    {
        if(i%2==1)
        {
        n=i;
        mul=1;
        while(n!=0)
        {
           r=n%10;
           mul=mul*r;
           n=n/10;
        }
        printf("multiplication of %d is %d\n",i,mul);

        }
    }
}
