#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=300;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(j%2==0)
            {
               break;
            }

        }
    }
}
