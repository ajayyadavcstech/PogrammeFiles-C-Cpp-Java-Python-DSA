#include <stdio.h>
#include <string.h>

int main()
{
    char a[5] = "ajaq";
    char b[55] = "ajau";
    // strcat(a,b);
    // puts(a);
    // puts(b);
    // printf("%d\n",strlen(a));
    // strcpy(a,b);
    // puts(a);
    printf("%d", strcmp(a, b));

    return 0;
}