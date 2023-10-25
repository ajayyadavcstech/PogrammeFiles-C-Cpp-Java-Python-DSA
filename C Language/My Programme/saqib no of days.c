#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the days\n");
    scanf("%d",&a);
    b=a/365;
    c=a/30;
    d=a/7;
    printf("year=%d\nmonth=%d\nweek=%d\ndays=%d",b,c,d,a);
}
