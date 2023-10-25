//structure contain another structure
#include<stdio.h>
struct address
{
    char city[30];
    char state[20];
};
struct employee
{
    char name[30];
    int id;
    float salary101;
    struct address a;
}e;
struct student
{
    char name;
    int roll_no;
    struct address a;
}s;
int main()
{
    printf("Enter the detail of employee\n");
    scanf("%d%s%f%s%s",&e.id,e.name,&e.salary,e.a.city,e.a.state);
    printf("Detail of employee is\n");
    printf("%d %s %f %s %s\n",e.id,e.name,e.salary,e.a.city,e.a.state);
    printf("Enter the detail of student\n");
    scanf("%d%s%s%s",&s.roll_no,s.name,s.a.city,s.a.state);
    printf("Detail of the student is\n");
    printf("%d %s %s %s\n",s.roll_no,s.name,s.a.city,s.a.state);
}

