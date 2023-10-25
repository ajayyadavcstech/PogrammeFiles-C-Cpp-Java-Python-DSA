//copy one one structure variable to another
//dot(.) operator is used to access the members
#include<stdio.h>
struct book
{
    char name[30],author[30];
    int pages;
    float price;
};
int main()
{
    struct book b1={"arihant","ajay",200,500};
    struct book b2={"letusc","ajju",300,300};
    b2=b1;//copy the content of b1
    printf("detail of the books\n");
    printf("%s  %d  %f  %s",b1.name,b1.pages,b1.price,b1.author);
    printf("\n%s  %d  %f  %s",b2.name,b2.pages,b2.price,b2.author);
}
