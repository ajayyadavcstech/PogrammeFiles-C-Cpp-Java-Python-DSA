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
    s.roll_no=1;
    printf("Roll number is %d\n",s.roll_no);
    strcpy(s.name,"ajay");
    printf("name is %s\n",s.name);
    s.marks=365;
    printf("Marks is %f\n",s.marks);
}
