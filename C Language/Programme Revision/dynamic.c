#include<stdio.h>
#include<stdlib.h>
typedef struct  st
{
    int n;
    int p[];
} student;

int main()
{
    // int *p=(int*)calloc(5,sizeof(int));
    // p[0]=4;
    student *pt;
    printf("%d \n",sizeof(pt));
    printf("%d \n",sizeof(student));
    pt=(student*)malloc(sizeof(student));
    pt->n=5;
    // pt->p=(int*)calloc(5,sizeof(int));
    // pt->p[0]=6;
    pt->p[0]=4;

    printf("%x \n",&pt->n);
    printf("%x \n",(pt));
    printf("%x \n",&(pt->p));
    printf("%x \n",&(pt->p[0]));

    return 0;
}