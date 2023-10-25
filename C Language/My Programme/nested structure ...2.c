// By writing the entire structure in the another structure
#include<stdio.h>
struct employee// nested
{
    int id;
    char name[30];
    float salary; struct address
    {
        char city[30];
        char state[10];
    }a;
}e;
int main()
{
    printf("Enter the detail of employee\n");
    scanf("%d%s%f%s%s",&e.id,e.name,&e.salary,e.a.city,e.a.state);
    printf("Detail of employee is\n");
    printf("%d %s %f %s %s\n",e.id,e.name,e.salary,e.a.city,e.a.state);
}
