#include<stdio.h>
void sum(int a,int b);
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum is %d",sum);
}
