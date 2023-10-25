//     10  =  1 0 1 0 (not a power of 2)
//      9  =  1 0 0 1 (bit flipped till 1st hitted 1)
// 10 & 9  =  1 0 0 0  != 0(always when no is not a power of 2)

//      8  =  1 0 0 0 (power of 2)  (only single bit is available in case of power so all left bit flipped) 
//      7  =  0 1 1 1 (bit flipped till 1st hitted 1)
//  8 & 7  =  0 0 0 0  == 0(always when no is power of 2)
#include<iostream>
using namespace std;

void power(int n)
{
    if (n==0)
    {
        cout<<"not a power of 2";
        return;
    }
    
   if ((n&(n-1))==0)
   {
      cout<<"power of 2";
   }
   else
   cout<<"not a power of 2";
   
}

int main()
{
    int n;
    cin>>n;
    power(n);

    return 0;
}