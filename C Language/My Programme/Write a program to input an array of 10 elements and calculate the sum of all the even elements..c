#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    printf("enter all 10 no\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
    }
    printf("sum is %d",sum);

}
