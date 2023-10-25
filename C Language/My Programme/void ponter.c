#include<stdio.h>
int main()
{
    int a=12;
    float b=13;
    char c='c';
    void *ptr;//void pointer
    ptr=&a;
    printf("value of ptr is %d\n",*(int*)ptr);//void pointer need to be appropriate typecasted
    printf("address of a is %d\n",(int*)ptr);
    ptr=&b;
    printf("value of ptr is %f\n",*(float*)ptr);
    printf("address of b is %d\n",(int*)ptr);
    ptr=&c;
    printf("value of ptr is %c\n",*(char*)ptr);
    printf("address of c is %d\n",(int*)ptr);

}
