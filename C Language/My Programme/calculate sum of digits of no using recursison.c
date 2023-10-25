#include<stdio.h>
int sum(int a);
int main()
{
    int a,s;
    printf("enter the no\n");
    scanf("%d",&a);
    s=sum(a);
    printf("sum of digit is %d\n",s);
}
int sum(int a)
{
  if(a==0)
    return(0);
  else
    return(a%10+sum(a/10));
}
