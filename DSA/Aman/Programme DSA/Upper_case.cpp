#include<iostream>
using namespace std;



int main()
{
    string str="ajay yadav";
    //convert to upper case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
           str[i]='A'+(str[i]-'a'); //or str[i]-=32;
        }
        
    }
   cout<<str;
    
    

    return 0;
}