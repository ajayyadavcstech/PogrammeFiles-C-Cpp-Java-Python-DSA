#include<stdio.h>
int main()//reverse of no=original no is called palindrome no.
{
    int i,t,rev=0,original;
    printf("enter the no\n");
    scanf("%d",&i);
    original=i;
    while(i!=0)
    {
        t=i%10;
        rev=rev*10+t;
        i=i/10;
    }
    if(rev==original)
        printf("no is palindrome");
    else
    printf("no is not a palindrome");

}
