#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
 char a[100];
 gets(a);
 puts(a);
 int i,j;
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]==' ')
     {
       for(j=i;a[j]!='\0';j++)
       {
          a[j]=a[j+1];
       }

       printf("%c",a[i]);
     }
     else
         printf("%c",a[i]);

 }


}
