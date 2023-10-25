#include <stdio.h>
void fun(int *arr)
{
    printf("size %d\n",sizeof(arr));

    for(int i=0;i<3;i++){
    printf("%x\n",arr++);    

    }
}

int main()
{
    int a=4;
    int arr[3] = {0};
    int ab=4;
    char b[5]="ajay";
    printf("%x\n",&a);    
    printf("%x\n",arr);    
    printf("%x\n",arr+1);    
    printf("%x\n",arr+2);    
    printf("ab %x\n",&ab);    

    printf("%s\n",b);    
    printf("%s\n",b+1);    
    printf("%s\n",b+2);    


    return 0;
}