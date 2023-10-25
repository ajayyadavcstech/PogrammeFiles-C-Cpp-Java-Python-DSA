#include<stdio.h>
int main()
{
    int a[10],i,sum=0,*p;
    p=&a[0];
    printf("enter the elements of an array\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum of the no is %d\n",sum);
}
