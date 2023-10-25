#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    int i=0,l=0,ans=0;
    while(1)
    {
        if(a[i]!=' ' && a[i]!='\0')
        {
            l++;
        }
        else
        {
            if(l>ans)
            {
                ans=l;
            }
            l=0;
        }
        if(a[i]=='\0')
            break;
        i++;
    }
    cout<<ans;
}

