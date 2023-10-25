#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter all 3 integer");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("a is smallest");
    }
    else if (b<a&&b<C)
    {
        printf("b is smallest");
    }
    else
    {
        printf("c is smallest");
    }
}
