#include<stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if (a>0)
        printf("no. is positive\n");
    else if(a<0)
        printf("number is negative\n");
    else
        printf("number is zero\n");

}
