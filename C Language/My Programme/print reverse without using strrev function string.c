//reverse of string without using strrev function
#include<stdio.h>
#include<string.h>
int main()
{
   char a[30];
   int i,len,temp;
   printf("enter the string\n");
   gets(a);
   len=strlen(a);
   printf("reverse of string is\na");
   while(i<len/2)
   {
      temp=a[i];
      a[i]=a[len-1-i];
      a[len-1-i]=temp;
      i++;
   }
   puts(a);
}

