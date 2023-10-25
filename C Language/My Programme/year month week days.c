#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the days\n");
    scanf("%d",&a);
    b=a/365;
    c=(a-b*365)/30;
    d=(a-b*365-c*30)/7;
    a=(a-b*365-c*30-d*7);
    printf("year=%d\nmonth=%d\nweek=%d\ndays=%d",b,c,d,a);
}
