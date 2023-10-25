#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int hexaToDecimal(string n)
{
    int decimal=0,j=0;
    int count=n.size();
    for (int i = count-1; i >= 0; i--)
    {
        
        if (n[i]>='0' && n[i]<='9')
        {
            decimal+=pow(16,j)*(n[i]-'0');
        }
        else if (n[i]>='A' && n[i]<='F')
        {
            decimal+=pow(16,j)*(n[i]-'A'+10);
        }
        else if (n[i]>='a' && n[i]<='f')
        {
            decimal+=pow(16,j)*(n[i]-'a'+10);
        }
        
        j++;
        
    }
    
   
   return decimal;
   
}
int main()
{
    string n;
    cin>>n;
    cout<<hexaToDecimal(n);
    return 0;
}