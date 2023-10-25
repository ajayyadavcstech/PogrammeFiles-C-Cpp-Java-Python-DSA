
#include<stdio.h>
void si(float p,float r,float t);
int main()
{
   float p,r,t;
   printf("enter p,r,t\n");
   scanf("%f%f%f",&p,&r,&t);
   si(p,r,t);
}
void si(float p,float r,float t)
{
    float c;
    c=(p*r*t)/100;
    printf("si is %f\n",c);
}
