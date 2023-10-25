#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter all 3 integer"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {
       if(num1>num3)
       {
           cout<<"num1 is greatest\n"<<num1<<endl;
       }
       else{
           cout<<"num3 is greatest\n"<<num3<<endl;
       }
    }
    else
    {
       if(num2>num3)
       {
           cout<<"num2 is greatest\n"<<num2<<endl;
       }
       else{
           cout<<"num3 is greatest\n"<<num3<<endl;
       }
    }
}

