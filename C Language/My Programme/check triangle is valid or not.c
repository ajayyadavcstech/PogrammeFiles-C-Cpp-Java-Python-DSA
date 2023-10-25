#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of all 3 angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
    {
        printf("angle not valid");

    }
    else if(a+b+c==180)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
}
