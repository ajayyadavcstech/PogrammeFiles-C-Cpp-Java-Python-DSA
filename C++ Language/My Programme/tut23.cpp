#include <iostream>
using namespace std;
class shop
{
    int item_id[20];
    int item_price[20];
    int counter;

public:
    void initial_counter()
    {
        counter = 0;
    }
    void getdata();
    void displaydata();
};
void shop ::getdata()
{
    cout << "enter id of your " << counter + 1 << " item" << endl;
    cin >> item_id[counter];
    cout << "enter price of your item" << endl;
    cin >> item_price[counter];
    counter++;
}
void shop ::displaydata()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "id of a item is " << item_id[i] << " and price of a item is " << item_price[i] << endl;
    }
}

int main()
{
    shop dukam;
    dukam.initial_counter();
    dukam.getdata();
    dukam.getdata();
    dukam.getdata();
    dukam.getdata();
    dukam.getdata();
    dukam.displaydata();

    return 0;
}