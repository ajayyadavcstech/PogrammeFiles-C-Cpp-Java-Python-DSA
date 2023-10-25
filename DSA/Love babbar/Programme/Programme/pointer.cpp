#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int **pt = &p;
    // -----------------   SINGLE POINTER GAME--------------
    //priting value of a
    //    cout<<a<<endl;
    //    cout<<*(&a)<<endl;
    //    cout<<*p<<endl;
    //    cout<<p[0];

    // printing address of a
    // cout<<&a<<endl;
    // cout<<&(*(&a))<<endl;
    // cout<<p<<endl;

    //printing pointer address
    // cout<<&p<<endl;
    // cout<<*(&p);

    // ----------------DOUBLE POINTER GAME------------

    //printing value of a
    // cout << a << endl;
    // cout << *p << endl;
    // cout << **pt << endl;
    // cout << p[0] << endl;
    // cout << pt[0][0] << endl;

    //printng address of a
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*pt<<endl;
    // cout<<pt[0]<<endl;

    //printig address of a , p , pt
    cout<<&a<<" "<<a<<" size of "<<sizeof(a)<<endl;
    cout<<&p<<" "<<p<< " size of "<<sizeof(p)<<endl;
    cout<<&pt<<" "<<pt<<" size of "<<sizeof(pt)<<endl;





    return 0;
}