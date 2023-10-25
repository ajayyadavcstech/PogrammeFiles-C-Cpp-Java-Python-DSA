
#include<stdio.h>
int main()
{
    int i,n,fact;
    for(i=1;i<=10;i++)
    {
        n=i;
        fact=1;
        while(n>0)
        {
            fact=fact*n;
            n--;
        }
        printf("factorial of %d is %d\n",i,fact);
}
}
