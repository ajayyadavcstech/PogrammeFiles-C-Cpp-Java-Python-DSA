
#include<stdio.h>
int main()
{
    int a[10],i,p=0,n=0,z=0;
    printf("enter the no\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]>0)
            p++;
        else if(a[i]<0)
            n++;
        else
            z++;
    }
    printf("p=%d  n=%d  z=%d",p,n,z);
}
