#include<stdio.h>
// #pragma pack(1)
struct st{
    int n;
    int arr[2];
    int a;
    char ab;
};
int main()
{
    struct st s1;
    s1.ab='a';
    char *p=&s1.ab;
   p= p+3;
    *p='A';
    printf("%c \n",s1.ab);
    printf("%x \n",p);

    printf("%x %x %x %x\n",&s1.n,s1.arr,&s1.a,&s1.ab);
    printf("%d ",sizeof(s1));

    
    return 0;
}