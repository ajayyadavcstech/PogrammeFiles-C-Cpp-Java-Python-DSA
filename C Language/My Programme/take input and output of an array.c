#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter the array element\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered elements are\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
}
