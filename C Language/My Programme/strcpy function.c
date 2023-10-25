//use to copy  content of one string into another
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],copy[30];
    int i=0;
    printf("enter the string\n");
    gets(a);
    strcpy(copy,a);
    printf("copied string is\n");
    puts(copy);
}
