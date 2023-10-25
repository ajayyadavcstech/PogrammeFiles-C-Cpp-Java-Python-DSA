#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int *pointer = &a; //store address of a variable
    cout << a << endl;
    cout << pointer << endl;
    cout << *pointer << endl; //dereferencing
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << " "; //we cannot modify array pointer it is constant
    }
    cout << endl;

    return 0;
}