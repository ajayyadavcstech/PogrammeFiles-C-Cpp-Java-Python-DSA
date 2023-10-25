#include<stdio.h>
int main()
{
    int a,b,c;
    printf("write all 3 side of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=0||b<=0||c<=0||a+b<=c||b+c<=a||c+a<=b)
    {
        printf("triangle not valid");
    }
    else if(a==b&&b==c)
    {
        printf("triangle is equilateral");
    }
    else if(a==b||b==c||c==a)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalene triangle");
    }
}
