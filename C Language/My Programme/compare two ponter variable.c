#include<stdio.h>
int main()
{
    int a[]={12,34,56,78,90};
    int *ptr1,*ptr2;
    ptr1=&a[4];
    ptr2=&a[4];
    if(ptr1==ptr2)
        printf("both pointers point to same memory location ");
    else
         printf("both pointers do not point to same memory location ");

}
//int a[]={12,34,56,78,90};
//int *ptr1;
//int *ptr2;
//ptr1=&a[4];// ptr1 is pointing to 90
//ptr2=&a[1];// ptr2 is pointing to 34
//ptr1+ptr2// not possible
//ptr1/ptr2// not possible,
//ptr1*ptr2// not possible
//ptr1%ptr2// not possible
//ptr1/2// not possible
//ptr1*2// not possible
//ptr1%2// not possible
