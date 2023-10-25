#include<stdio.h>
int main()
{
    int i,count=0;
    printf("enter the no\n");
    scanf("%d",&i);
    while(i>0)
    {
        count=count+1;
        i=i/10;
    }
    printf("no of digit is %d",count);
}
