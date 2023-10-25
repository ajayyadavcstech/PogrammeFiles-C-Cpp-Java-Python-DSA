#include<stdio.h>
int main()
{
    float r,vol;
    printf("enter the value of r\n");
    scanf("%f",&r);
    vol=1.33*3.14*r*r*r;
    printf("volume of sphere is %f",vol);
}
