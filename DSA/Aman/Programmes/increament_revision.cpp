#include<iostream>
using namespace std;

int main()
{
    int a=1,b=9,ans;
    ans=(a++)+b+(a++); //operation then increment it(increament and decreament) does not depend on semicolon;
    cout<<ans<<endl;
    cout<<a<<endl;
    return 0;
}