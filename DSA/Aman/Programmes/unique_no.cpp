#include<iostream>//here triplet are present 
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int bit[64];
    for (int i = 0; i < 64; i++)
    {
        bit[i]=0;
    }
 
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; a[i]!=0 ; j++)
        {
            if((a[i] & (1<<j))!=0)
            {
              bit[j]++;
              a[i]&=(a[i]-1);
            }
        }
        
    }
    int result=0;
    for (int  i = 0; i<64; i++)
    {
        bit[i]%=3;
        if(bit[i]==1)
        result=(result | (1<<i));
    } 
    cout<<result;
    
    
    
    return 0;
}