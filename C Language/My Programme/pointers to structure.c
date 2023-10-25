//we will use arrow operator to access the members of structure
#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
};
int main()
{
    struct student s={1,"ajay",45};
    struct student *p;
    p=&s;
    printf("%d  %s  %f",p->roll_no,p->name,p->marks);
}
