#include<stdio.h>
int main()
{
    int i,t,sum=0,original;//sum of cube of each digit of no is equal to original no then no is armstrong.
    printf("enter the digit\n");
    scanf("%d",&i);
    original=i;
    while(i>0)
    {
        t=i%10;
        sum=sum+t*t*t;
        i=i/10;
    }
    if(original==sum)
        printf("digit is armstrong");
    else
        printf("not a armstrong");
}
