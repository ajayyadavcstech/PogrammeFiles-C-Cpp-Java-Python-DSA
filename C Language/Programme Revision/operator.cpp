#include<iostream>
using namespace std;


int main()
{
    // int a=5;
    // // int b=4;
    // printf("%c",97);

   char *ptr = (char *) "hello";
   ptr[0] = 'a';  //segfault! you can't change something that's immutable
   cout<<ptr[0];

    return 0;
}