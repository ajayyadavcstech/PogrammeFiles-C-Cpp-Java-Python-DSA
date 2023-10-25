#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is greater");

    }
    else if (a<b)
    {
        printf("b is greater");
    }
    else
        {
            printf("a is equal to b");

    }
}
