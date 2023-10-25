#include<stdio.h>
int main()
{
   char a[30],temp,copy[30];
   int i,len,c;
   printf("enter the string\n");
   gets(a);
   len=strlen(a);
   strcpy(copy,a);
   while(i<len/2)
   {
      temp=a[i];
      a[i]=a[len-1-i];
      a[len-1-i]=temp;
      i++;
   }
  c=strcmp(a,copy);
  if(c==0)
  {
    printf("string is palindrome");
  }
  else
    printf("not a palindrome");
}
