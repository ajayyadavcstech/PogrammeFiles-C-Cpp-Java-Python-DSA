#include <iostream>
using namespace std;
namespace a  //namespace used for grouping some code having same variables or function name
{
    int a = 5;
    void print()
    {
        cout << a;
    }
}
namespace b
{
    int a = 6;
    void print()
    {
        cout << a;
    }
}
// int c=1;
// void print(){
//     cout<<c;
// }
using namespace b;

int main()
{
    cout << "Hello world" << endl;
    unsigned int a = -4;
    cout << a<<endl;
    print();
    char b=1234;
    cout<<b;

    return 0;
}