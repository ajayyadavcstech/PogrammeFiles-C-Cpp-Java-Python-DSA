#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    arr[0] = 4;
    arr[2] = 5;
    arr[1] = 6;
    arr[3] = 7;
    arr[4] = 8;
    for (int i = 0; i < 5; i++)
    {
        printf("%d  %x \n", arr[i], arr + i);
    }
    int *n=(int*)malloc(sizeof(int)*500);
    printf("value %d  %x\n",n[0],n);
    printf("value %d  %x\n",n[499],n);
    arr = (int *)realloc(arr, sizeof(int) * 8);
    printf("realloc \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d  %x \n", arr[i], arr + i);
    }

    return 0;
}