#include<stdio.h>
int main()
{
    int *p;//wild pointer
    printf("value of p is %x\n",p);
    //printf("value of *p is %x\n",*p);//gives garbage value
    int x=45;
    p=&x;
    printf("value of p is %d\n",p);
    printf("value of *p is %d\n",*p);
}
