#include<stdio.h>
void mod(int c);
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    mod(a);
    mod(b);
}
void mod(int c)
{
    if(c>=0)
        printf("mod is %d\n",c);
    else
    {
        c=-c;
        printf("mod is %d\n",c);
    }
}
