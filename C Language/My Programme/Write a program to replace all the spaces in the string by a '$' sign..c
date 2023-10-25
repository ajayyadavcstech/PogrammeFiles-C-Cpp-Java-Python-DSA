#include<stdio.h>
#include<string.h>
int main()
{
   char a[30];
   int i=0;
   printf("enter the string\n");
   gets(a);
   while(a[i]!='\0')
   {
       if(a[i]==' ')
       {
        a[i]='$';
       }
       i++;
   }
   printf("string after replacing space with $\n");
   puts(a);

}
