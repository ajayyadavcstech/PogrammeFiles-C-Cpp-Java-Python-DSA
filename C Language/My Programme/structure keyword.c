//dot(.) operator is used to access the members
     #include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    float marks;
    char sec[6];
};
//struct student s;//it will allocate 44 byte of the memory
int main()
{
    struct student s;
    printf("enter the detail of the student name ,roll no ,marks ,sec\n");
    scanf("%s%d%f%s",s.name,&s.roll_no,&s.marks,s.sec);
    printf("detail of the student\n");
    printf("%s  %d  %f  %s",s.name,s.roll_no,s.marks,s.sec);
}
