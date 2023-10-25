#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[30];
    float salary;
}*e;
int main()
{
    int i,n,id,flag=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    e=(struct employee*)malloc(n*sizeof(struct employee));
    printf("enter the detail\n");
    for(i=0;i<=n-1;i++)
    {
       printf("enter the detail of %d employee\n",i+1);
       scanf("%d%s%f",&e[i].id,e[i].name,&e[i].salary);
    }
    printf("enter the id for search\n");
    scanf("%d",&id);
   for(i=0;i<=n-1;i++)
   {
       if(e[i].id==id)
       {
           printf("search is succesfull\n");
           printf("%d  %s  %f\n",e[i].id,e[i].name,e[i].salary);
           flag=1;
       }
   }
   if(flag==0)
    printf("search not found !");
}
