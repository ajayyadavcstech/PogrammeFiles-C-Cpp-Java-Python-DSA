#include<stdio.h>
int main()
{
    int a;
    printf("enter the age of persion");
    scanf("%d",&a);
    if(a<0||a>100)
    {
        printf("not valid age");
    }
    else if(a>=18)
    {
        printf("eligible best of luck");
    }
    else
    {
        printf("not eligible! better luck next time");
    }
}
