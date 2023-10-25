#include <stdio.h>
void display(int arr[], int n)
{
    printf("size of array is %d\n", n);
    for (int i = 0; i < n; i++) //traversal
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int index_insertion(int arr[], int *size, int capacity, int index, int element)//insertion using index
{
    if (index >= capacity)
    {
        return -1;
    }
    for (int i = (*size) - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    (*size)++;

    return 0;
}
int main()
{
    int arr[100] = {1, 9, 4, 8, 6};
    int size = 5;
    display(arr, size);
    int check = index_insertion(arr, &size, 100, 100, 3); //we are passing size of an array using pointer because in c we reference variable are not available so to refere we have to use c++
    if (check == -1)
    {
        printf("Element not inserted\n");
    }
    else
        display(arr, size);

    return 0;
}