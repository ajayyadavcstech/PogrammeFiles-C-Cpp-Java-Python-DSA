#include<stdio.h>
struct detail
{
    int pages;
    char name[15];
    float price;
};
int main()
{
    struct detail b[5];
    int i;
     printf("enter the detail of book name,pages ,price");
    for(i=0;i<=4;i++)
    {
        printf("enter the detail of %d book\n",i+1);
        scanf("%s%d%f",b[i].name,&b[i].pages,&b[i].price);

    }
     for(i=0;i<=4;i++)
    {
        printf("entered the detail of %d book\n",i+1);
        printf("%s  %d  %f\n",b[i].name,b[i].pages,b[i].price);

    }
}
