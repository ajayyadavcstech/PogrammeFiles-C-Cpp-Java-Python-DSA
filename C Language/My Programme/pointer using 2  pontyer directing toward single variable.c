#include<stdio.h>
int main()
{
    int x=20;
    int *p1=&x;
    int *p2=&x;
    printf("Value of *p1 is %d\n",*p1);//20
    printf("Value of *p2 is %d\n",*p2);//20
    *p1=56;
    printf("Value of *p1 is %d\n",*p1);//56
    printf("Value of *p2 is %d\n",*p2);//56
}
