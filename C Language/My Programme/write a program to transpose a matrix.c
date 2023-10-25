#include<stdio.h>
int main()
{
    int a[3][3],i,j,trans[3][3];
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
        printf("transpose of matrix is\n");
         for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
            trans[i][j]=a[j][i];
            printf("%d  ",trans[i][j]);
            }
            printf("\n");

        }
}
