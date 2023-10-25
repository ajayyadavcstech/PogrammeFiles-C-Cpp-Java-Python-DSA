#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void print()
    {
        cout << " complex no is " << a << " + " << b << "i" << endl;
        
    }
};
complex ::complex()
{
    a = 99;
    b = 87;
    cout<<"hello world";
}
int main()
{
    complex c1;
    c1.print();

    return 0;
}
/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/