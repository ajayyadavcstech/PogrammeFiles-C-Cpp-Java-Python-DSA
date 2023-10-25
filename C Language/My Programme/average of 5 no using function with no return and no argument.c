#include<stdio.h>
void avg();
int main()
{
    avg();
}
void avg()
{
    float a,b,c,d,e,average;
    printf("enter all 5 no\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    average=(a+b+c+d+e)/5;
    printf("average is %f",average);
}
