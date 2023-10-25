#include<stdio.h>
void print();
int a=10;
int main()
{
    printf("a is %d\n",a);
    print();
    printf("a is %d\n",a);

}
void print()
{
    printf("a is %d\n",a);
    a=20;
}
