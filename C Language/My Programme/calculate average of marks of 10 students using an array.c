#include<stdio.h>
int main()
{
    float a[10],sum=0,avg;
    int i;
    printf("enter the marks\n");
    for(i=0;i<=9;i++)
        scanf("%f",&a[i]);
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("avg=%f",avg);
}
