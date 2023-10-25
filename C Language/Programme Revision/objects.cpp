#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void getprice()
    {
    }
    void setprice() {}
};
void shop ::setprice()
{
    cout << "Ente id of your item of " << counter << endl;
}

int main()
{

    return 0;
}