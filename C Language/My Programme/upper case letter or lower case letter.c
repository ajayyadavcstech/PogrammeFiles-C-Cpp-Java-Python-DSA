#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("character is capital letter\n");

    }
    else{printf("ch is of small letter");
    }
}
