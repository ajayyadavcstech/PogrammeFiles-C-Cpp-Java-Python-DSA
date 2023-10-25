#include<stdio.h>
int main()
{
    int i,n,r=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++)//we can also write i<=n/2 in place of i*i<=n.
    {
        if(n%i==0)
       {
        r=0;
        break;
       }
    }
    if(r==0)
        printf("no is not a prime");
    else
        printf("no is prime");
}
