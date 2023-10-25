//point toward such memory location which is already deleted
#include<stdio.h>
int main()
{
    int *ptr;//wild pointer later become dangling pointer
    {
        int a=12;
        ptr=&a;
        printf("value of *ptr is %d\n",*ptr);
    }
    printf("value of *ptr is %d\n",*ptr);//dangling pointer
    //printf("value of a is %d",a);error
}
