#include<iostream>
using namespace std;

void exponentiaion(int m,int n)
{
    int ans=1;
    while(n>0){
        if(n&1){
            //for odd 
            ans*=m;
            m*=m;
            n=n>>1;
        }
        else
        {
            m*=m;
           n= n>>1;
        }
    }
    cout<<ans;
}
int main()
{
    exponentiaion(2,10);
    

    return 0;
}