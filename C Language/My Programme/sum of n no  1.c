#include<stdio.h>
int main()
{
    int sum=0,i=1,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("final addition of n no is %d",sum);
}
