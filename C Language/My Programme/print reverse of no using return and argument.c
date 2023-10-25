#include<stdio.h>
int palindrome(int a);
int main()
{
    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    b=palindrome(a);
      if(a==b)
        printf("no is palindrome");
    else
        printf("not a palindrome");

}
int palindrome(int a)
{
    int rev=0,r;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    return (rev);

}

