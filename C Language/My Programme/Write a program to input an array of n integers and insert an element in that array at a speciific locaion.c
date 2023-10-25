#include<stdio.h>
int main()
{
    int a[10],n,b,p,i;
    printf("enter the upto what no you want\n");
    scanf("%d",&n);
    printf("enter the no\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no you want to insert\n");
    scanf("%d",&b);
    printf("at which place no is inserted?\n");
    scanf("%d",&p);
    for(i=n-1;i>=p;i--)//0  1  2  3  4  5
    {                 //
        a[i+1]=a[i];
    }
    a[p]=b;
    printf("array after inserting\n");
    for(i=0;i<=n;i++)
    printf("%d  ",a[i]);
}
