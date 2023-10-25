#include<stdio.h>

void display(int arr[],int size)
{
    printf("size of array is %d\n",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void index_deletion(int arr[],int *size,int index,int capacity)  //deletion using index of an array
{
   if (index>=capacity)
   {
       printf("cannot be deleted");
       return;
   }
   for (int i = index+1; i < *size; i++)
   {
       arr[i-1]=arr[i];
   }
   (*size)--; 
    display(arr,*size);
}
int main()
{
    int arr[100]={2,4,6,8,10};
    int size=5;
    display(arr,size);
    index_deletion(arr,&size,100,100);


    return 0;
}