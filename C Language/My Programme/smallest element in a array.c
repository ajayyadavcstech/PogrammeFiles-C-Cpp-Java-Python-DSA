#include<stdio.h>
int main()

{
    int a[5],i,smallest;
    printf("enter all 5 no\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=1;i<=4;i++)
    {
        if(smallest>a[i])
        {
           smallest=a[i];
        }
    }
    printf("smallest value is %d",smallest);
}

