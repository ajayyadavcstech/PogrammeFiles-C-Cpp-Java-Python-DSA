#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a\n");

  scanf("%d",&a);
    if(a>0)
    {
        printf("a is positive");
    }
    else if(a<0)
    {
        printf("a is negative");
    }
    else
    {
        printf("a is zero");

    }
}
