#include<iostream>
using namespace std;
void prime(int n)
{
    int spf[n+1]; //it contain smallest prime factor of index
    for (int i = 0; i <=n; i++)
    {
        spf[i]=i;
    }
    for (int i = 2; i <=n; i++)
    {
        if(spf[i]==i) //to check unmarked
        {
            for (int  j = i*i; j <=n; j+=i)
            {
                if(spf[j]==j) // again check before marking 
                spf[j]=i;
            }
            
        }
    }
    while (n!=1)
    {
        cout<<spf[n]<<" ";
        n/=spf[n];

    }
    
    
    

}
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    prime(n);
    
    return 0;
}