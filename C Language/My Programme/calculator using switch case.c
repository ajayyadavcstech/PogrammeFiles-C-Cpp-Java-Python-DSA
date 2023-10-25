#include<stdio.h>
int main()
{
    float a,b,sum,sub,mul,div;
    char option;
    printf("enter + for sum, -for sub,* for mul,/for div\n");
    scanf("%c",&option);
    printf("enter the value of a,b\n");
    scanf("%f%f",&a,&b);

    switch(option)
    {
    case '+':
        sum=a+b;
        printf("sum is %f\n",sum);
        break;
     case'-':
         sub=a-b;
         printf("minus is %f",sub);
         break;
     case'*':
         mul=a*b;
         printf("multiplication is %f",mul);
         break;
     case '/':
         div=a/b;
          printf("division is %f",div);
          break;
     default:
         printf("wrong input");
    }
}
