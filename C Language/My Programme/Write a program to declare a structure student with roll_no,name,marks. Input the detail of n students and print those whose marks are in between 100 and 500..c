#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks
}*e;
int main()
{
    int i,n;
    printf("enter the no\n");
    scanf("%d",&n);
    e=(struct student*)malloc(n*sizeof(struct student));
    printf("enter the detail\n");
    for(i=0;i<=n-1;i++)
    {
       printf("detail of %d student\n",i+1);
       scanf("%d%s%f",&e[i].roll_no,e[i].name,&e[i].marks);
    }
    for(i=0;i<=n-1;i++)
    {
        if(e[i].marks>=100 && e[i].marks<=500)
        {
            printf("%d  %s  %f\n",e[i].roll_no,e[i].name,e[i].marks);
        }
    }
}
