#include<iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    public:
    void setid(){
        salary=500;
        cout<<"enter the id of a employee"<<endl;
        cin>>id;
    }
    void getid()
    {
        cout <<"id of a employee is "<<id<<endl;
    }
};
int main()
{
    employee fb[4];
    for (int  i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    

    return 0;
}