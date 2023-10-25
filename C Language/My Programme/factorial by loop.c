#include<stdio.h>
int main()
{
    int n,mul=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        mul=mul*n;
        n--;
    }
    printf("factorial is %d",mul);
}
