#include<iostream>
#include<cstring>
using namespace std;
void substring(string input,string output)
{
    if (input.length()==0)
    {
        cout<<"{"<<output<<"}"<<endl;//when input is empty then ew get one ans 
        return;
    }
    substring(input.substr(1),output+input[0]);
    substring(input.substr(1),output);
    
}
int main()
{
    string input,output;
    cin>>input;
substring(input,output);
    
    return 0;
}