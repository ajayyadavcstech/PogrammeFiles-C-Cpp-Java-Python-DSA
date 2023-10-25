#include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    float marks;
};
int main()
{
    int i,n;
    struct student *s;
    printf("enter the no of student\n");
    scanf("%d",&n);
    s=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<=n-1;i++)
    {
        printf("enter the detail of %d student\n",i+1);
        scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d  %s  %f\n",s[i].roll_no,s[i].name,s[i].marks);
    }
}
