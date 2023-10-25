#include<stdio.h>
void palindrome(int a);
int main()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    palindrome(a);

}
void palindrome(int a)
{
    int rev=0,r,i;
    i=a;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(rev==i)
        printf("no is palindrome");
    else
        printf("not a palindrome");
}
