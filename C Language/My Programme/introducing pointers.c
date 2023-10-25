#include<stdio.h>
int main()
{
    int a=12;
    int *p;
    p=&a;
    printf("address of a is %d\n",&a);
    printf("value of p is %d\n",p);
    printf("address of p is %d\n",&p);
    printf("value stored in p is %d\n",*p);
    float c=12,*fp;//different way of writting
    fp=&c;
    printf("address of c is %d\n",&c);
    printf("value of fp is %d\n",fp);
    printf("address of fp is %d\n",&fp);
    printf("value stored in fp is %f\n",*fp);
    char d=12,*cp=&d;//different way of writting
    printf("address of d is %d\n",&d);
    printf("value of cp is %d\n",cp);
    printf("address of cp is %d\n",&cp);
    printf("value stored in cp is %d\n",*cp);
}
