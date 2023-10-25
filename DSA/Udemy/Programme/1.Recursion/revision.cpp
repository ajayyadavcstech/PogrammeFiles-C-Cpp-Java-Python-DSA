#include<iostream>
using namespace std;
int sum1(int n)
{
    static int i=0;
    if (n==0)
    {
        return 0;
    }
   i++;
  return i+sum1(n-1) ;


}
int main()
{
    int n;
    cin>>n;
    cout<<sum1(n);
    
    return 0;
}