#include<stdio.h>
int main()
{
    int a[5],i,largest;
    printf("enter all 5 no\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i<=4;i++)
    {
        if(largest<a[i])
        {
           largest=a[i];
        }
    }
    printf("largest value is %d",largest);
}
