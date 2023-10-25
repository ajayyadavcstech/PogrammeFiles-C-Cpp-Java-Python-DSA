#include <iostream>

using namespace std;

struct employee
{
    char empname[50];
    int empno;
    char design[20];
} w;

int main()
{

    cout << "Enter Full name: ";

    cin.get(w.empname, 50);
    cout << "Enter employee number ";
    cin >> w.empno;
    cout << "Enter employee designation";
    cin.sync();
    cin.get(w.design, 20);

    return 0;
}
