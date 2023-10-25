#include<stdio.h>
void sum();
int main()
{
    sum();
    sum();
    sum();
    printf("Thanks You");
}

void sum()
{
    int a,b,sum;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("value of sum is %d\n",sum);
}
