#include <iostream>
using namespace std;

class ajju
{
private:
public:
    int a;

    ajju(int a);
    ~ajju();
};

ajju::ajju(int a)
{
    cout << "I am a constructor " << endl;
    this->a = a;
}

ajju::~ajju()
{
    cout << "I am a destructor " << endl;
}

int main()
{
    ajju a(4);
    int b = 66;
    cout << a.a<<endl;
    cout << b << endl;
    

    return 0;
}