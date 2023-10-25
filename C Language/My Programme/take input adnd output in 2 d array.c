#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter the elements of 2d array\n");
    for(i=0;i<=2;i++)//outer loop
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("entered value of i 2d array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
    }

}
