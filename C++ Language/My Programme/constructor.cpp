#include <iostream>
using namespace std;
class IntegerArray
{

public:
    int a=0;
    int *data = new int[a];

    IntegerArray(int a)
    {
        cout << "This calls constructor :" << endl;
        this->a = a;
    }
    
    
    ~IntegerArray()
    {
        cout << "This calls Destructor :" << endl;
        delete[] data;
    }
};
int main()
{
    IntegerArray a(2); //This call the constructor
    a.data[0] = 4;
    a.data[1] = 2;
    if (true)
    {
        IntegerArray b(a);
        b.data[0]=3;
        cout<<a.data[0]<<endl;
        cout << b.data[0] << endl;
    }
    cout << a.data[0] << endl; // The result is 4
    
}