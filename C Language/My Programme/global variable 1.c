#include<stdio.h>
int a=10;//global variable
void print();
int main()
{
    printf("value of a is %d\n",a);
    print();
    printf("value of a is %d\n",a);
}
void print()
{
    int a=20;
    printf("value of a is %d\n",a);
}
