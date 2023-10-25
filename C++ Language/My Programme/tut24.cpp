#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter the value of id " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "id of a " << count << " employee is " << id << endl;
    }
    static void getcount(){
        cout<<"the count of a employee is "<<count<<endl;
    }
};
int employee::count; //default value is 0 and we must have to write static variable outside class because it is not a part of any class
int main()           // so no memory allocared so we have to defint outside the class for memory allocation.
{
    employee ajay, ajju, ajeet;
    ajay.setdata();
    ajay.getdata();
    employee::getcount();

    ajju.setdata();
    ajju.getdata();
    employee::getcount();

    ajeet.setdata();
    ajeet.getdata();
    employee::getcount();

    return 0;
}