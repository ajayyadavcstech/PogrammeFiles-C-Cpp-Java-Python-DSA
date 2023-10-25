#include <iostream>
#include <math.h>
using namespace std;

int binary_to_decimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        decimal = decimal + last_digit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}
int octal_to_decimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        decimal = decimal + last_digit * pow(8, i++);
        n /= 10;
    }
    return decimal;
}
int last_digit(char a)
{
    if (a >= 'a' && a <= 'f')
    {
       int digit= int(a - 'a') + 1 + 9;
       cout<<digit<<endl;
       return digit;
    }
    a=int(a-'0');
    cout<<a<<endl;
    return a;
}
int hexadecimal_to_decimal(string n)
{
    int decimal = 0;
    int i = 0;
    int size = n.size();
    while (size > 0)
    {
        decimal = decimal + last_digit(n[size - 1]) * pow(16, i++);
        size--;
    }
    return decimal;
}

int main()
{
    // int binary;
    // cin >> binary;
    // cout << binary_to_decimal(binary);

    // int octal;
    // cin >> octal;
    // cout << octal_to_decimal(octal);

    string hexa;
    cin>>hexa;
    cout<<hexadecimal_to_decimal(hexa);

    return 0;
}