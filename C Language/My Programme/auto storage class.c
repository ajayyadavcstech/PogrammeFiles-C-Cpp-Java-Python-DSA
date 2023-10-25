#include<stdio.h>
void display_1();
void display_2();
int main()
{
    auto int a=10,b;// a is local to main function
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);//print any un predictable garbage value
    display_1();
    display_2();
}
void display_1()
{
    auto int a=20,b;//local to display_1 only
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);
}
void display_2()
{
   auto int a=30,b;//local to display_2 only
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);
}
