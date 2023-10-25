//use to compare 2 string
 #include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    int c;
    printf("enter the string\n");
    gets(a);
    printf("enter the string\n");
    gets(b);
    c=strcmp(a,b);
    if(c==0)
    {
        printf("two string are equal\n");
    }
    else
        printf("2 string are not equal\n");
}

