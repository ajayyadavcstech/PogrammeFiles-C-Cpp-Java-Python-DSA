
#include<stdio.h>
int main()
{
    char a[30];
    int i=0,count=0;
    printf("enter the string\n");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("no of spaces is %d",count);
}
