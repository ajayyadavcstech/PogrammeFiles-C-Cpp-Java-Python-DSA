#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("value of a is %d",a);
    printf("value of b is %d",b);
}
