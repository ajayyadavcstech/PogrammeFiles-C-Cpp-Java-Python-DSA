//chack if there exists two elenents in an arary such that their sum is equal to given k
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
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    int l=0,h=n-1;
    while (l<h)
    {
        if((a[l]+a[h])==k)
        {
            cout<<l<<" "<<h;
            return 0;
        }
        else if ((a[l]+a[h])<k)
        {
            l++;
        }
        else
        h--;
    }
    cout<<-1;
    
    
    return 0;
}