#include<stdio.h>
int main()
{
    char a[30];
    int i=0,count=0,n;
    printf("enter the string\n");
    gets(a);
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    n=count;
    for(i=n;i!=0;i--)
    {
        printf("%c",a[i]);
    }
}
