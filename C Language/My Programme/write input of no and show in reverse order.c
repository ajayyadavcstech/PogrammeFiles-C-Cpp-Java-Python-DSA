#include<stdio.h>
int main()
{
    int i,t,rev=0;
    printf("enter the value of i\n");
    scanf("%d",&i);
    while(i!=0)
    {
        t=i%10;
        rev=rev*10+t;
        i=i/10;

    }
    printf("reverse of no is %d",rev);

}
