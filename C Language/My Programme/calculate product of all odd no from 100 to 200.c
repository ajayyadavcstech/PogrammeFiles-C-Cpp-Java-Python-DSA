#include<stdio.h>
int main()
{
    int i,mul=1;
    for(i=100;i<=200;i++)
    {
        if(i%2==0)
    {
        mul=mul*i;
    }
    }
    printf("product is %d",mul);
}
