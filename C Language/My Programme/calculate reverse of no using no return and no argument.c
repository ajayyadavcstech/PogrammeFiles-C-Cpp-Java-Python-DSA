#include<stdio.h>
void reverse();
int main()
{
   reverse();
}
void reverse()
{
    int n,t,rev=0;
    printf("enter the no\n");
    scanf("%d",&n);
    while(n!=0)
    {
       t=n%10;
       rev=rev*10+t;
       n=n/10;
    }
    printf("reverse of no is %d\n",rev);
}
