#include<stdio.h>
struct stu
{
    int a;
    int b;
} s; //new name

int main()
{
    // typedef long int i;
    // i a,b,c;
    // typedef struct  stu stu;
    // stu a,b;
    // a.a
    // struct stu s;
    s.a=4;
    s.b=5;
    printf("%d",s.a);
    

    return 0;
}