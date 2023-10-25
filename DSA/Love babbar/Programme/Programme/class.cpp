#include <iostream>
#include <string>
using namespace std;

class Hero
{
public:
    string name;

    int level;
    // void print()
    // {
    //     cout << name << endl;
    // }
};
int main()
{
    Hero h;
    h.name = "ajay yadav";
    cout << sizeof(Hero) << endl;
    // h.print() ;
    cout << &h << endl;
    cout << &h.level << endl;
    cout << h.name.length() << endl;
    cout << h.name.capacity() << endl;
    h.name = "ajay yadav is a good boy";
    cout << h.name.length() << endl;
    cout << h.name.capacity() << endl;
    cout << endl
         << sizeof(h.name[0]) << endl;
    size_t _size = 9;
    cout << _size << endl;
    cout << h.name.npos << endl;
    cout << h.name[0] << endl;
    cout << h.name.at(0) << endl;
    string ::iterator it = h.name.end();
    cout << endl;
    it--;
    cout << *(it--) << endl;
    cout << *(it--) << endl;
    cout << *(it--) << endl;

    cout << endl;
    const string ::const_iterator t = h.name.cbegin();
    cout << t[0] << endl;
    h.name.insert(it = h.name.begin(), 'r');
    cout << h.name;

    cout<<endl;
    string :: iterator tt=h.name.end();
    cout<<((*tt)=='\0')<<endl;
    for(string :: iterator it =h.name.begin();*it!='\0';it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it : h.name)
    {
        cout<<it<<" ";
    }

    return 0;
}