#include <bits/stdc++.h>
using namespace std;
int main()
{
    string time,hh,ms;
    cin>>time;
    hh=time.substr(0,2);
    ms=time.substr(2,6);
    int h1;
    h1=stoi(hh);
    if(time[8]=='A' )
       {
           if(h1==12)
           {
               cout<<"00";
           }
           else
            {

                cout<<hh;
            }
       }
       else
       {
           if(h1==12)
            cout<<hh;
           else
           cout<<h1+12;
       }
       cout<<ms;
}


