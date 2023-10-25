#include<stdio.h>
int main()
{
    int a[3][4],i,j,largest;
    printf("enter the no.\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    largest=a[0][0];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
          if(a[i][j]>largest)
            largest=a[i][j];
        }
        printf("\n");
    }
    printf("largest element is %d",largest);
}
