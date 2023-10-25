#include<iostream>
#include<math.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int copy=n;
    int sum=0;
    while (n>0)
    {
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n/=10;
    }
    if (copy==sum)
    {
        cout<<"Given no is armastrong ";
    }
    else
    cout<<"not a armastrong no";
    
    

    return 0;
}