#include<iostream>
using namespace std;
int setbit(int n,int i)
{
    return (n | (1<<i));
}
int main()
{
   cout<<setbit(5,1);
    
    return 0;
}