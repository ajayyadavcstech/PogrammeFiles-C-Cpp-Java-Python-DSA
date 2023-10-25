#include<stdio.h>
int main()
{
    float a,b,sum;
    printf("enter a and b\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    if(a==b)
    {
        sum=3*sum;
        printf("both no are equal\n");
        printf("sum is %f",sum);
    }
    else
        printf("sum is %f",sum);
}
