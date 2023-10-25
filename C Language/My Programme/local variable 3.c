#include<stdio.h>
int main()
{
    int a=10;
    {
       a=20;
        printf(" value of a is %d\n",a);
    }
     printf(" value of a is %d\n",a);

}
