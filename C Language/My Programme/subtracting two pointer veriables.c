#include<stdio.h>
int main()
{
    int a[]={12,34,56,78,90};
    int *ptr1,*ptr2;
    ptr1=&a[4];
    ptr2=&a[1];
    printf("subtraction of ptr1 and ptr2 is %d\n",ptr1-ptr2);//4-1=3
    printf("subtraction of *ptr1 and *ptr2 is %d\n",*ptr1-*ptr2);//90-34=56

}
