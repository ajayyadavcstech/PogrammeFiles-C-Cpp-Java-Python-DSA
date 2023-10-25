#include<stdio.h>
int sum();
int main()
{
   int c;
   c=sum();
   printf("sum is %d\n",c);
}
int sum()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    return (a+b);
}

