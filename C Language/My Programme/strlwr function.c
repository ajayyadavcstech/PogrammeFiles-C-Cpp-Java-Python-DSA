//use to convert all upper case into lower case
 #include<stdio.h>
#include<string.h>
int main()
{
    char a[30];;
    printf("enter the string\n");
    gets(a);
    strlwr(a);
    printf("string in lower case\n");
    puts(a);
}
