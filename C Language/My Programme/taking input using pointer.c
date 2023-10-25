
#include<stdio.h>
int main()
{
    int a[10],*p,i;
    p=&a[0];
    printf("Enter the elements of array using pointer\n");
    for(i=0;i<=9;i++)
        {
            scanf("%d",p+i);// scanf("%d",&a[i]);
        }
    printf("Entered the elements of array using pointers is\n");
    for(i=0;i<=9;i++)
        {
            printf("%d ",*(p+i));// scanf("%d",&a[i]);
        }
}
