#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no upto you want to enter \n";
    cin>>n;
    int a[n];
    cout<<"enter "<<n<<" numbers\n";
    for(int i=0;i<n;i++)
    {
        b:
        cin>>a[i];
        if(a[i]<-50 || a[i]>50 || a[i]==0)
        {
            cout<<"input no between -50 to 50 let's take this input again\n";
            goto b;

        }
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"don't copy previous no let's take this input again\n";
                goto b;

            }
        }
    }
    cout<<"entered no is\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"no divisible by either 2 or 3 but not 6 in increasing order\n";
    for(int i=0;i<n;i++)
    {
       int c;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
    }
    int t=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]%2==0 && a[i]%3!=0) || (a[i]%3==0 && a[i]%2!=0))
        {
           cout<<a[i]<<endl;
           t++;
        }
    }
    if(t==0)
    {
        cout<<"No such element satisfy all critaria\n"<<"0";
    }
}
