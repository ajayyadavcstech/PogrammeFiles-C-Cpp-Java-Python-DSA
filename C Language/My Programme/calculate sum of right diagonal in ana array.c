#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the no.\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d  ",a[i][j]);
            if(i+j==2)
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum is %d",sum);
}
