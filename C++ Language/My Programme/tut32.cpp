#include<iostream>
using namespace std;
class simple
{
    int data1,data2;
    public:
    simple(int a,int b=9)//default argument;
    {
       data1=a;
       data2=b;
    }
    void printdata();
};
void simple :: printdata()
{
   cout<<"the value of data is "<<data1<<" and "<<data2<<endl; 
}
int main()
{
    simple c1(1,2);
    c1.printdata();

    simple c2(3);//default argument;
    c2.printdata();
    
    return 0;
}