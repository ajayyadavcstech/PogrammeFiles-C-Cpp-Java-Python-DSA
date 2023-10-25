#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    printf("enter a,b,c\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum is %d\n",c);
}
int sum(int a,int b)
{
    return (a+b);
}
