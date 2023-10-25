#include<iostream>
using namespace std;

int main()
{
    int *a=new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter "<<i+1<<"th element :";
        cin>>a[i];
    }
       for (int i = 0; i < 5; i++)
    {
        cout<<*(a+i)<<endl;
    }
    delete a;

       for (int i = 0; i < 5; i++)
    {
        cout<<*(a+i)<<endl;
    }
    
    return 0;
}