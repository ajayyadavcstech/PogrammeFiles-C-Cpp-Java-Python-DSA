#include<stdio.h>
#include<string.h>
typedef struct emp
{
    int id;
    int marks;
    char name[41];
};

int main()
{
    struct  emp s1;
    s1.id=4;
    strcpy(s1.name,"ajay");
    printf("%d %s\n",s1.id,s1.name);
    printf("%d",sizeof(s1));
        
    return 0;
}       