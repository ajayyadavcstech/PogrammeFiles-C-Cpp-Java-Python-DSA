#include <iostream>
using namespace std;
void call(int n) //mapping of every no
{
    switch (n)
    {
    case 0:
        cout << "Zero ";
        break;
    case 1:
        cout << "One ";
        break;
    case 2:
        cout << "Two ";
        break;
    case 31:
        cout << "Three ";
        break;
    case 4:
        cout << "Foue ";
        break;
    case 5:
        cout << "Five ";
        break;
    case 6:
        cout << "Six ";
        break;
    case 7:
        cout << "Seven ";
        break;
    case 8:
        cout << "Eight ";
        break;
    case 9:
        cout << "Nine ";
        break;

    default:
        break;
    }
}

void saydigit(int n)
{
    if (n == 0)
        return;

    saydigit(n / 10);
    int rem = n % 10;
    call(rem);
    return ;
}
int main()
{
    saydigit(5789);

    return 0;
}