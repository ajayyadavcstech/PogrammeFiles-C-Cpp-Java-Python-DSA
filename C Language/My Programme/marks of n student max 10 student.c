#include<stdio.h>
int main()
{
    float m[10];
    int i,n;
    printf("write no of element\n ");
    scanf("%d",&n);
    printf("write marks of all %d students\n",n);
    for(i=0;i<=n-1;i++)
    {
    scanf("%f",&m[i]);
    }
    printf("marks of all %d student is below\n",n);
    for(i=0;i<=n-1;i++)
    {
    printf("%f\n",m[i]);
    }
}
