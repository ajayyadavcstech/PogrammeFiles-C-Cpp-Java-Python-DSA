#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,a;
    printf("enter the interval between 1 to positive infinity\n");
    scanf("%d%d",&n,&m);
    if(n>0 &&m>0)
    {
    printf("prime no is\n");
    for(i=n;i<=m;i++)
    {
       a=0;
       for(j=2;j<=i/2;j++)
       {
           if(i%j==0)
           {
               a=1;
               break;
           }
       }
       if(a==0 && i!=1)
       {
          printf("%d\n",i);
          sum=sum+i;
       }
    }
    printf("sum=%d",sum);
    }
    else
    {
        printf("wrong input try again\n");
        main();
    }
}
