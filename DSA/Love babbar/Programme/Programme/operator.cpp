#include <iostream>
using namespace std;

int main()
{
    signed int a = 2;
    signed int b = 3;
    cout<<sizeof(a)<<endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~a) << endl;
    cout << (a ^ b) << endl;
    cout<<(a<<1)<<endl;   //multiplying by 2 in most cases
    cout<<(a>>2)<<endl;   //divide by 2 in most cases

    return 0;
}