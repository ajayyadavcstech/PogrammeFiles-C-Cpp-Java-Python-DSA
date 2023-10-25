#include<stdio.h>
int main()
{
    int a=10;
    {
       int b=20;
        printf(" value of b is %d\n",b);
    }
     //printf(" value of b is %d\n",b); error is hare bcos b is undeclared in this block
     printf(" value of a is %d\n",a);

}
