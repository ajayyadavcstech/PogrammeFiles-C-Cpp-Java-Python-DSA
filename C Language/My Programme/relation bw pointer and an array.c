#include<stdio.h>
int main()
{
    int a[]={12,34,56,78,90},*p,i;
    p=a;//start pointing adress of first element
    // or p=&a[0];
    for(i=0;i<=4;i++)
    {
        printf("%d\n",*(p+i));//or we use p++

    }
}
//we can also do using while loop
