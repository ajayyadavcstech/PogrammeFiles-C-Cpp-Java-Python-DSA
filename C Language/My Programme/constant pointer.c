#include<stdio.h>
int main()
{
    int x=12;
    int *const ptr=&x;// constant ponter point only one constant in his life time
    printf("value of *ptr is %d\n",*ptr);
    *ptr=56;//it can change the value
    printf("value of *ptr is %d\n",x);
    x=87;
    printf("value of *ptr is %d\n",*ptr);
    //int y=56;
   //ptr=&y;//error
}
