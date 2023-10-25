#include<stdio.h>
int main()
{
    char fn;
    float r,area,circumference;
    printf("write a for area and c for circumference");
    scanf("%c",&fn);
    printf("enter the radius of circle");
    scanf("%f",&r);
    switch(fn)
    {
    case 'a':
        area=3.14*r*r;
        printf("area of circle is %f",area);
        break;
    case 'c':
        circumference=2*3.14*r;
        printf("circ is %f",circumference);
        break;
    default:
        printf("wrong input");
    }
}
