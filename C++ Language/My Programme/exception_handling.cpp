#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int re;
    cout<<"Enter a and b " <<endl;// here on dividing with 0 gives no result it is a exceotion
    cin>>a>>b;
    try{
        if(b==0)
    {
        throw b;
    }
    re=a/b;
    cout<<re<<endl;

       
    }
    catch(int a)
    {
        cout<<"the denominator is "<<a<<endl;
    }
    return 0;
}