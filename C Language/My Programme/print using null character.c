//use of null char
#include<stdio.h>
int main()
{
    char x[]="hello world";
    int i=0;
    while(x[i]!='\0')//null char
        {
            printf("%c",x[i]);
            i++;
        }
}
