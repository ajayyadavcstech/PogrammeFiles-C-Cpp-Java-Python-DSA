#include<math.h>
int main()
{
    double x,y;
    printf("Enter the value of x\n");
    scanf("%lf",&x);
    y=sqrt(x);
    printf("Square root of x is %lf \n",y);
    //printf("Square root of x is %lf \n",sqrt(x));
    printf("Square root of 25 is %lf \n",sqrt(25));
    printf("power function is %lf\n",pow(x,3));
    printf("power function is %lf\n",pow(6,3));
    printf("floor function is %lf\n",floor(43.4));
    printf("ceil function is %lf",(44.5));
}
