#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter the value of no\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]>=0)
        {
            printf("no is %d\n",a[i]);
        }
        else
        {
            a[i]=-a[i];
            printf("no is %d\n",a[i]);
        }
    }

}
