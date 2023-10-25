#include<stdio.h>
char character(char a);
int main()
{
    char a,b;
    printf("enter character in small letter\n");
    scanf("%c",&a);
    if((a>=97 && a<=122)||  (a>='a' && a<='z'))
    {
        b=character(a);
        printf("capital letter is %c",b);
    }
    else
        printf("wrong input");
}
char character(char a)
{
 return (a=a-32);
}
