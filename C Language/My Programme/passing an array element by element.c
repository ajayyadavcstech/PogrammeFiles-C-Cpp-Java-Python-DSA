
// Passing an array element by element
#include<stdio.h>
void display(int x);
int main()
{
    int a[]={12,34,56,78,90},i;
    for(i=0;i<=4;i++)
        {
            display(a[i]);// display(a[0])-- display(12)
        }
}
void display(int x)
{
    printf("%d ",x);
}
