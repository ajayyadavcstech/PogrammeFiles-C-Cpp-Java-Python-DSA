#include<stdio.h>
#include <stdlib.h>

struct ArrayAdt
{
    int total_size;
    int used_size;
    int *ptr;
};

void set_value(struct ArrayAdt *a,int tsize,int usize )
{
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(a->total_size*sizeof(int));
    printf("Enter %d size of array\n",usize);
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d",&(a->ptr)[i]);      
    }
}
void show(struct ArrayAdt *a) 
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf ("%d is %d\n",i+1,a->ptr[i]);
    }
    
}



int main()
{
    struct ArrayAdt marks;
    set_value(&marks,20,5);
    show(&marks);

    return 0;
}