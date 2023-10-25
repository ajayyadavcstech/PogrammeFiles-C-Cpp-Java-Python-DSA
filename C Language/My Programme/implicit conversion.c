
// conversion according to compiler not in hand of user
//always smaller size data type converted into larger size data typede
#include<stdio.h>
int main()
{
    int z=10;
    char y='a';
    z=y+z;// y is converted into ascii value which is 97
    float a=z+1.0;
    printf("z=%d,a=%f",z,a);
}
// this is implicite conversion it may loss your some data
