#include<stdio.h>
int main()
{
    int a=10;// local to main function
    {
       int a=20;//redeclare variable
        printf(" value of a is %d\n",a);
    }
     printf(" value of a is %d\n",a);

}
