#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void getdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void displaydata()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrtemp=ptr;
    int p;
    float q;

    for (int i = 0; i < size; i++)
    {
        cout << "enter id and price of a item:" << i + 1 << endl;
        cin >> p >> q;
        (ptr)->getdata(p, q);
        ptr++;
    }
    //   for (int  i = 0; i < size; i++)     // using ptr++, ptr starts pointing ptr[3] int diaplay function and we get garbage value ; show we have to use some other method ;
    // {
    //     (ptr)->displaydata();
    //     ptr++;

    // }

    for (int i = 0; i < size; i++)
    {
        cout<<"item no "<<i+1<<" is : "<<endl;
        (ptrtemp)->displaydata();
        ptrtemp++;
    }

    return 0;
}