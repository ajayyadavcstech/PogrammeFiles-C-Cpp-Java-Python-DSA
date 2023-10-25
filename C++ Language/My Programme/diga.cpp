#include <iostream>
using namespace std;
int toh(int n)
{
   static int r1=1,r2=0,r3=0;
   if(r2<r1){
       cout<<"move disk"<<r1<<" from rod 1 to rod 3"<<endl;
       r2++;
       r1++;
        
   }
}
int main()
{
    int n;
    cin>>n;
    toh(n);

}