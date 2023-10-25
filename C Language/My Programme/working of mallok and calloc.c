#include<stdio.h>
int main()
{
    int *a,*b,i,n;
    printf("enter the no\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));//single argument
    b=(int*)calloc(n,sizeof(int));// 2 argument
    printf("value of malloc using array\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nvalue of calloc using array\n");
      for(i=0;i<=n-1;i++)
    {
        printf("%d  ",b[i]);
    }
}

