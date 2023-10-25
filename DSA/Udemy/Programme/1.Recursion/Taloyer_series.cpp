//taloyer series e^x= x^0/0! + x^1/1! + x^2/2! + x^3/3! + x^4/4! ........... x^n/n!
#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double power=1;
    static double factorial=1;
    if (n==0)
    {
        return 1;
    }
    double sum=e(x,n-1);
    power =power*x;
    factorial=factorial*n;
    return sum+power/factorial;
    
}
int main()
{
    cout<<e(3,10);

    
    return 0;
}