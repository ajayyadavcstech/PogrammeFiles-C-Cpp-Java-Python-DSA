#include<stdio.h>
int main()
{
    int t1=0,t2=1,t,n,i=1;// n is last term and i is first term
    printf("enter last term\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",t1);
        t=t1+t2;
        t1=t2;
        t2=t;
        i++;
    }
}
