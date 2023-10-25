#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
    printf("enter upto what no you want to calculate sum\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum is %d",sum);
}

