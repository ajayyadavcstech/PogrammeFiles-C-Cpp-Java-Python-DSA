#include<stdio.h>
int main()
{
    char ch;
    printf("write ch in lower case\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        printf("capital letter is %c",ch);
    }
}

