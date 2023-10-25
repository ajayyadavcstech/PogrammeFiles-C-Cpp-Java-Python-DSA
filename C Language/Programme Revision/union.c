#include<stdio.h>
#pragma pack(1)
typedef union st{
    int a;
    int arr[4];
    char b[21]; //allocate 24 byte paddin concept

}student;
int main()
{
    student s1;
    // s1.a=33;
    s1.arr[0]=66;
    s1.b[0]='a';
    printf("%x %x %x\n",&s1.a,s1.arr,s1.b);
    printf("%d \n",s1.a);
    printf("%d \n",sizeof(s1));
    
    return 0;
}