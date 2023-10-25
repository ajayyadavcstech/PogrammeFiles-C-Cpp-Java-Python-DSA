// set bit example
// n=5(0101)
// i=2
// 0  1  0  1
//     ^
//  1<<i(2) =0  1  0  0

#include <iostream>
using namespace std;

void getbit(int n, int pos)
{
    if (((1 << pos) & n) != 0)
    {
        cout << "1";
    }
    else
        cout << "0";
}
void setbit(int n,int pos)
{
    n=((1<<pos)|n);
    cout<<n;
}
void clearbit(int n,int pos)
{
    n=n&(~(1<<pos));
    cout<<n;
}
void updatebit(int n,int pos,int value=1)//value(1,0) 
{
    int mask=~(1<<pos); //masking bit
    n=n&mask;       //clear bit
    n=n | (value<<pos);  // update accordin to value
    cout<<n;        
}

int main()
{
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    // getbit(n,pos);
    // setbit(n,pos);
    // clearbit(n,pos);
    updatebit(n,pos,0);


    return 0;
}