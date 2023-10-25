#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("enter the degree you want to calculate\n");
    scanf("%f",&a);
    a=a*(3.14/180);
    b=sin(a);
    c=cos(a);
    d=tan(a);
    printf("value of \n");
    printf("sin(a)=%f\n",b);
    printf("cos(a)=%f\n",c);
    printf("tan(a)=%f\n",d);
    printf("cosec(a)=%f\n",(1/b));
    printf("sec(a)=%f\n",(1/c));
    printf("cot(a)=%f",(1/d));
}


