#include<stdio.h>
int main()
{
    float var1=3.12356789101112131415;
    double var2=3.12356789101112131415;
    long double var3=3.12356789101112131415;
    printf("%f\n",var1);
    printf("%.16lf\n",var2);
    printf("%.21Lf\n",var3);
    printf("%u\n",sizeof(float));
    printf("%u\n",sizeof(double));
    printf("%u\n",sizeof(long double));
}
