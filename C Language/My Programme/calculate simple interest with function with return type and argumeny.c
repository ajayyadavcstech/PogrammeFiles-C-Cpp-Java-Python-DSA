#include<stdio.h>
float si();
int main()
{
    float a;
    a=si();
    printf("si is %f\n",a);
}
float si()
{
    float p,r,t;
    printf("enter all value\n");
    scanf("%f%f%f",&p,&r,&t);
    return ((p*r*t)/100);
}
