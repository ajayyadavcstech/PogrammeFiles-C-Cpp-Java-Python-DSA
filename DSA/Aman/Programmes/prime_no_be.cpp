#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout <<"Prime numbers are :"<<endl;
    for(int i=a;i<=b;i++)
    {
        int check=0;
        for(int j=2;j<=sqrt(i);j++)
        {
           if(i%j==0)
           {
               check=1;
               break;
           }
        }
        if(check==0)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}