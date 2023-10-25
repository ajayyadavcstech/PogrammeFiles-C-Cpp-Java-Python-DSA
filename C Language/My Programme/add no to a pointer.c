#include<stdio.h>
int main()
{
    int a[]={12,34,56,78,90};
    int *ptr;
    ptr=&a[0];
    printf("value of ptr is %d\n",*ptr);
    ptr=ptr+1;
    printf("value of ptr is %d\n",*ptr);

}
