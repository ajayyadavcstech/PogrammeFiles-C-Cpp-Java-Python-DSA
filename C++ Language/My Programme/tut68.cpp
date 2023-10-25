#include <iostream>
using namespace std;
template <class t>
class ajay
{
public:
    int data;
    ajay(t a)
    {
        data = a;
    }
    void display();
};
template <class t>
void ajay<t>::display()
{
    cout << data << endl;
}
void fun(int a)
{
    cout << "I am first fun() " << a << endl;
}

template <class t>
void fun(t a)
{
    cout << "I am templatised fun() "<<a << endl;
}

template <class t>
void fun1(t a)
{
    cout << "I am templatised fun() "<<a << endl;
}

int main()
{
    // ajay<float> a(4.5);
    // cout << a.data << endl;
    // a.display();

    fun(4); //exact match have highest priority
    fun1(4);

    return 0;
}