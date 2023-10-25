// Passing an entire array to a function
#include<stdio.h>
void display(int x[],int n);
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<=n-1;i++)
        {
            scanf("%d",&a[i]);
        }
        display(a,n);// call/pass by address
        }
        void display(int x[],int n)
        {
            int i;
            for(i=0;i<=n-1;i++)
                printf("%d ",x[i]);
        }
