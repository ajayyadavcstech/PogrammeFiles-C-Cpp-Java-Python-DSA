#include<stdio.h>
struct student
{
    char name[20],sec[10];
    int roll_no;
};
int main()
{
    struct student e[5];
    int i;
    printf("enter the detail roll no,name sec\n");
    for(i=0;i<=4;i++)
    {
         printf("detail of %d student\n",i+1);
         scanf("%d%s%s",&e[i].roll_no,e[i].name,e[i].sec);

    }
    printf("required detail is\n");
    for(i=0;i<=4;i++)
    {
        if(strcmpi(e[i].sec,"k20kr")==0)
        printf("%d  %s  %s\n",e[i].roll_no,e[i].name,e[i].sec);
    }
}
