#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the no.\n");
    scanf("%d%d",&a,&b);
    if(a>=0)
    {
        printf("no is %d\n",a);
    }
    else
    {
        a=-a;
        printf("no is %d\n",a);
    }
    if(b>=0)
    {
        printf("no is %d\n",b);
    }
    else
    {
        b=-b;
        printf("no is %d\n",b);
    }

}
