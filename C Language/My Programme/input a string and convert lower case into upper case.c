#include<stdio.h>
int main()
{
    char a[30];
    int i=0;
    printf("enter the string\n");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("string in upper case\n");
    puts(a);

}
