// example of a union
#include<stdio.h>
union student
{
    int roll_no;// 4 bytes
    char name[30];// 30 bytes
    float marks;// 4 bytes
}; union student s;// only 30 bytes will be allocated //union student s={1,"rohan",365};
int main()
{
    printf("enter roll no\n");
    scanf("%d",&s.roll_no);
    printf("Roll number is %d\n",s.roll_no);
    printf("enter the name\n");
    scanf("%s",s.name);
    printf("name is %s\n",s.name);
    printf("enter marks\n");
    scanf("%f",&s.marks);
    printf("Marks is %f\n",s.marks);
}

