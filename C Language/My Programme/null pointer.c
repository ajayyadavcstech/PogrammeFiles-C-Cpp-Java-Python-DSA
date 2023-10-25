#include<stdio.h>
int main()
{
    int *p=NULL;//null pointer
    printf("value of p is %x\n",p);
    //printf("value of *p is %x\n",*p);//gives error or no value
    int x=45;
    p=&x;
    printf("value of p is %x\n",p);
    printf("value of *p is %x",*p);//dereferring
}
