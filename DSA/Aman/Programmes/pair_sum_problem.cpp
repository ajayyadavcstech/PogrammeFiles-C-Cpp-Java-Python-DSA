//chacl if there exists two elenents in an arary such that their sum is equal to given k
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter the value to compare"<<endl;
    cin>>k;
    for (int  i = 0; i < n-1; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<i<<" "<<j<<endl;
            cout<<true;
            return 0;
            }
        }
        
    }
    cout<<false;
    
    return 0;
}