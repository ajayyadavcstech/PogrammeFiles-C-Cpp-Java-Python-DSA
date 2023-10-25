#include<stdio.h>
int modify(int*);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10},i;
    modify(&a);
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
}
int modify(int*n)
{
   int i;
   for(i=0;i<=9;i++)
   {
       *(n+i)=3**(n+i);
   }
}
