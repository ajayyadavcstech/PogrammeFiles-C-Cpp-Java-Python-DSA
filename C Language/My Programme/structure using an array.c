#include<stdio.h>
struct detail
{
    int roll_no;
    char name[15];
    float marks;
};
int main()
{
    struct detail s[5];
    int i;
     printf("enter the detail roll_no,name,marks");
    for(i=0;i<=4;i++)
    {
        printf("enter the detail of %d student\n",i+1);
        scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);

    }
    for(i=0;i<=4;i++)
    {
        printf("entered the detail of %d student\n",i+1);
        printf("%d  %s  %f\n",s[i].roll_no,s[i].name,s[i].marks);

    }
}
