#include<stdio.h>
int main()
{
    int i,n,rev,r;
    for(i=101;i<=501;i++)
    {
        n=i;
        rev=0;
        while(n!=0)
        {
           r=n%10;
           rev=rev*10+r;
           n=n/10;
        }
        printf("reverse of %d is %d\n",i,rev);

    }
}
