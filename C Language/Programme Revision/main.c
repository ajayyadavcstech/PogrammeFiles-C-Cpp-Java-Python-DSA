#include <stdio.h> //preprocesser directive
void print(char arr[])
{
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%c",arr[i]);
    }
        printf("\n%d\n",sizeof(arr));
    arr[0]='3';
    
}

int main(int argc, char const *argv[])
{
    /*const int a=9;
    printf("%d %d \a",a,b);
    */
    //    int a=4;
    //    int *p=&a;
    //    char b='a';
    //    char * pt=&b;
    //    printf("%x \n%x " ,p+2,pt+2);

    //    int arr[5];
    //    int *p=arr;
    //    printf("%x ",p);

    // char arr[5]="ajay";
    // printf("%s\n",arr);
    // int cnt=1;
    // for (int i = 0; i<10 ;i++)
    // {
    //    if(arr[i]=='\0')
    //    break;
    //    cnt++;
    // }
    // printf("%d\n",cnt);

    // char arr[25] = "ajay";
    // gets(arr);
    // puts(arr);
    char arr[55]="ajay";
    arr[0]='a';
    // arr="ajju";
    // gets(arr);

    // print(arr);
    // puts(arr);

    return 0;
}
