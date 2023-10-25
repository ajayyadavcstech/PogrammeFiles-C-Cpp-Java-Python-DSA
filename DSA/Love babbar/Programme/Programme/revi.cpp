#include <iostream>
using namespace std;

void fun(int *&p)
{
    cout << "inside fun " << endl
         << &p << endl;
    p++;
}
class node
{
public:
    int data;
    node *next;
    ~node()
    {
        cout << "callign des" << endl;
    }
};
int main()
{
    int *arr = new int[3];
    int *p = arr;
    cout << arr << endl;
    cout << &arr << endl;
    cout << p << endl;
    cout << &p << endl;
    fun(p);
    // cout<<*p<<endl;
    node n;
    node *head = &n;
    head = &n;
    head->data = 4;
    cout << head->data << endl;

    return 0;
}