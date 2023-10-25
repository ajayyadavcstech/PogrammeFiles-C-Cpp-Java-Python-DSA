//dot(.) operator is used to access the members
#include<stdio.h>
struct book
{
    char name[30];
    int pages;
    float price;
};
int main()
{
    struct book b;
    printf("enter the detail of the book,name ,pages ,price\n");
    scanf("%s%d%f",b.name,&b.pages,&b.price);
    printf("detail of the student\n");
    printf("%s  %d  %f",b.name,b.pages,b.price);
}
