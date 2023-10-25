#include<stdio.h>
int factorial(int a);
int main()
{
    int a,f;
    printf("enter the no\n");
    scanf("%d",&a);
    f=factorial(a);
    printf("factorial is %d\n",f);
}
int factorial(int a)
{
    if(a==0 || a==1)
        return(1);
    else
        return(a*factorial(a-1));//recursion
}
