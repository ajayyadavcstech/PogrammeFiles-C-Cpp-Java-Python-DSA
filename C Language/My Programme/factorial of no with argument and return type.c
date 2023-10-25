#include<stdio.h>
int fac(int a);
int main()
{
    int a,c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    c=fac(a);
    printf("factorial is %d\n",c);
}
int fac(int a)
{
    int i=1;
    while(a!=0)
    {
        i=i*a;
        a--;
    }
    return (i);

}

