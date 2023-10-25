#include<stdio.h>
int main()
{
    float m[10];
    int i;
    printf("write marks of all students\n");
    for(i=0;i<=9;i++)
    {
    scanf("%f",&m[i]);
    }
    printf("marks of all student is below\n");
    for(i=0;i<=9;i++)
    {
    printf("%f\n",m[i]);
    }
}
