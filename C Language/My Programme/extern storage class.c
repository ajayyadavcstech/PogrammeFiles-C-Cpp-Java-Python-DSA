
 //To implement extern storage class
 #include<stdio.h>
 void first();
 int main()
{
    extern int x;
    printf("\nx=%d",x);
    first();
    printf("\nx=%d",x);
}
void first()
{
    extern int x;
    printf("\nx=%d",x);
    x=x+10;
}
int x=10;
