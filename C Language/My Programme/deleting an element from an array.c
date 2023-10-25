#include<stdio.h>
int main()
{
    int a[20],n,p,i;
    printf("enter the upto what no you want\n");
    scanf("%d",&n);
    printf("enter the no\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("at which place you want to delete?\n");
    scanf("%d",&p);
    for(i=p;i<=n-2;i++)//0  1  2  3  4
    {                 //
        a[i]=a[i+1];
    }
    printf("array after deleting\n");
    for(i=0;i<=n-2;i++)
    printf("%d  ",a[i]);
}

