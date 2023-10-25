#include<stdio.h>
int main()
{
    int x=20;
    int *p=&x;
    printf("Value of *p is %d\n",*p);//20
    printf("Value of x is %d\n",x);//20
    *p=56;
    printf("Value of *p is %d\n",*p);//56
    printf("Value of x is %d\n",x);//56
}
