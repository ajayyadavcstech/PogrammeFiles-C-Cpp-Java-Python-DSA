#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a=12,b=34;
    printf("values of variable before call is %d %d\n",a,b);
    swap(a,b);
     printf("values of variable after call is %d %d\n",a,b);
}
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("values during function call is %d %d\n",a,b);
}
