//counting no of vowel in the string
#include<stdio.h>
int main()
{
    char a[30];
    int i=0,count=0;
    printf("enter the string\n");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("no of vowel is %d",count);

}
