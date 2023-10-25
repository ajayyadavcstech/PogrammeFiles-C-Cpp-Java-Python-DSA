#include<stdio.h>
int main()
{
    char a[30];
    int i=0,count=0;
    printf("enter the string\n");
    gets(a);
    while(a[i]!='\0')
    {
       count++;
       i++;
    }
    printf("no of character in the string are %d",count);

}
