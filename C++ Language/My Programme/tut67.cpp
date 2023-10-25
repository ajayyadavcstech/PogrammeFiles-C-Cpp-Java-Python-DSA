#include <iostream>
using namespace std;
// float funaverage(float  a , float b)
// {
//     float avg=(a+b)/2;
//     return avg;
// }
template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>
float funaverage(t1 a, t2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

int main()
{
    float a;
    a = funaverage(3.0, 4);
    cout << a << endl;

    int b = 3, c = 5;
    swapp(b, c);
    cout << b << endl
         << c;

    return 0;
}