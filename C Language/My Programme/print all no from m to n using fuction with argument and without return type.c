#include<stdio.h>
void print(int m,int n);
int main()
{
    int m,n;
    printf("enter the no\n");
    scanf("%d%d",&m,&n);
    print(m,n);
}
void print(int m,int n)
{
    while(m<=n)
    {
        printf("%d\n",m);
        m++;
    }
}
