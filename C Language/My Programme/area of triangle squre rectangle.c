#include<stdio.h>
int main()
{
    float b,h,l1,b1,s,tri,rec,squ;
    printf("enter the value of b,h,l1,b1,s\n");
    scanf("%f%f%f%f%f",&b,&h,&l1,&b1,&s);
    tri=0.5*b*h;
    rec=b1*l1;
    squ=s*s;
    printf("value of triangle is %f\n",tri);
    printf("value rec is %f\n",rec);
    printf("value of squ is %f\n",squ);


}
