#include<stdio.h>
int main()
{
    int a[50],n,i,f,l,m,element,loc=-1;
    printf("enter the no\n");
    scanf("%d",&n);
    printf("enter the all no\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    f=0;
    l=n-1;
    m=(f+l)/2;
    printf("enter the element to search\n");// 1  2  3  4
    scanf("%d",&element);
    while(f<=l)
    {
        if(a[m]==element)
        {
            loc=m;
            break;
        }
        else if(element>a[m])
        {
            f=m+1;
        }
        else
        {
            l=l-1;
        }
        m=(f+l)/2;
    }
    if(loc!=-1)
        printf("search is succesfull");
    else
        printf("search is not succesfull");

}
