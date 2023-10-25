//dot(.) operator is used to access the members
#include<stdio.h>
struct employee
{
    char name[30],dep[30];
    int id;
    float salary;
};
int main()
{
    struct employee e;
    printf("enter the detail of the employee  name ,id ,salary ,depatment\n");
    scanf("%s%d%f%s",e.name,&e.id,&e.salary,e.dep);
    printf("detail of the employee\n");
    printf("%s  %d  %f  %s",e.name,e.id,e.salary,e.dep);
}
