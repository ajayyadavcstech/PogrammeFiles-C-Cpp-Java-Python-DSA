#include<stdio.h>
void increase(int a);
int main()
 {
     int a=10;
     printf("value of n before function call is %d\n",a);
     increase(a);
     printf("value 0f n after function call is %d",a);
 }
 void increase(int a)
 {
     a=a+10;
 }
