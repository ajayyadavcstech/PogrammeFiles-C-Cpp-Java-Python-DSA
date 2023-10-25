#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("enter the value of n\n");
    scanf("%d",&n);
    s=sum(n);
    printf("sum is %d\n",s);
}
int sum(int n)
{
    if(n==0)
        return(0);
    else
    return(n+sum(n-1));
}
