#include<stdio.h>
void gre();
int main()
{
    gre();
}
void gre()
{
    int a,b,c;
    printf("enter the value a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("a is greatest");
    else if(b>a&&b>c)
        printf("b is greatest");
    else
        printf("c is greatest");
}
