#include<iostream>
#include<math.h>
using namespace std;
void check(int a)
{
    int flag=0;
    for (int i = 2; i <= sqrt(a); i++) 
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<a<<endl;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    for (int  i = a; i <= b; i++)
    {
        check(i);
    }
    
    return 0;
}