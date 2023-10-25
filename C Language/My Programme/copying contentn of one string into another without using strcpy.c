#include<stdio.h>
int main()
{
    char a[30],b[30];
    int i=0;
    printf("enter the string\n");
    gets(a);
    printf("entered string is\n");
    puts(a);
    printf("copied string is\n");
    while(a[i]!='\0')//a[i] is a string so we cannot use <= sign
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    puts(b);
}
