#include<stdio.h>
int a=1;
void mssge();
int main()
{
  extern int y;
  printf("%d\n%d\n",a,y);

}
int y=8;

void mssge()
{
    a=a+1;
    printf("%d\n",a);
}




