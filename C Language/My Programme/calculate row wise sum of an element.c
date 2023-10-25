#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("Enter the elements of matrix\n");
    for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
            scanf("%d",&a[i][j]);
            }
        }
        printf("entered element is\n");
         for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }

        printf("sum of row is\n");
         for(i=0;i<=2;i++)
        {
            sum=0;
            for(j=0;j<=2;j++)
            {
                sum=sum+a[i][j];
            }
            printf("%d\n",sum);
        }
}
