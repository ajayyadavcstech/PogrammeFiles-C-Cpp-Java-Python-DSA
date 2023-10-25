#include<stdio.h>
void increase();
int main()
{
    increase();
    increase();
    increase();
}
void increase()
{
    auto int a=10;
    auto int c=0;
    static int b=10;
    printf("check no after and before increament\n");
    printf("a and b before increament is %d  %d\n",a,b);
    printf("c is %d\n",c);
    a=a+1;
    b=b+1;
    c=c+1;
    printf("a and b after increament is %d  %d\n",a,b);
    printf("c is %d\n",c);//initial value is 0
}
