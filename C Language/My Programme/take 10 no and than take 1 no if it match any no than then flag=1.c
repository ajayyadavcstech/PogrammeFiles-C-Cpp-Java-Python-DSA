#include<stdio.h>
int main()
{
    int a[10],b,flag=0,i;
    printf("enter the no\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        printf("enter the no to match\n");
        scanf("%d",&b);
        for(i=0;i<=9;i++)
        {
            if(b==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("search is succesfull\n");
        else
            printf("search not succesfull");


}
