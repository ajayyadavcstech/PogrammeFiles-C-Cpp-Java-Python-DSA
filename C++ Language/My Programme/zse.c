#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n%4==0 && n%100!==0) || n%400==0)
    {
        cout<<"Entered year is leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
}
