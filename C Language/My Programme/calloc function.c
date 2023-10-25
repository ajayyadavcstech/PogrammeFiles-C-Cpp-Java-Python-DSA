//working of calloc function
#include<stdio.h>
int main()
{
    int *a,i,n;//if no input is taken then it takes 0
    printf("enter the no of element\n");
    scanf("%d",&n);
    a=(int*) calloc(n,sizeof(int));
    if(a==NULL)//if memory not allocated
    {
        printf("memory is not allocated");
        exit(0);
    }
    printf("enter the %d no of element\n",n);
    for(i=0;i<=n-1;i++)
    {
        //scanf("%d",&a[i]);
        scanf("%d",a+i);
    }
    for(i=0;i<=n-1;i++)
    {
       // printf("%d  ",a[i]);
        printf("%d  ",*(a+i));
    }
}
