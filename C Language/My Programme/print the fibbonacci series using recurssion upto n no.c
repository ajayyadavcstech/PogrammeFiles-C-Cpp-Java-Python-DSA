#include<stdio.h>
int fibbo(int i);
int main()
{
    int n,i=1,f;
    printf("enter upto what no you want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fibbo(i);
        printf("%d\n",f);
    }
}
int fibbo(int i)
{
    if(i==1)
        return 0;
    else if(i==2)
        return 1;
    else
        return (fibbo(i-1)+fibbo(i-2));
}
