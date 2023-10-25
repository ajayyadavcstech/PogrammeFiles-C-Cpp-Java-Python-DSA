#include<stdio.h>
int main()
{
    int a[10],i,largest,*p;
    p=&a[0];
    printf("enter the elements of an array\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",p+i);
    }
    largest=*p;
    for(i=0;i<=9;i++)
    {
       if(*(p+i)>largest)
       largest=*(p+i);
    }
    printf("largest value is %d\n",largest);
}
