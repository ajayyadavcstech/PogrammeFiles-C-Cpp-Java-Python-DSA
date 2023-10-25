//use to concatenate(join) the two string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("enter the string\n");
    gets(a);
    printf("enter the string\n");
    gets(b);
    strcat(a,b);
    printf("string after join is\n");
    puts(a);

}

