#include<iostream>
using namespace std;
void substrwithascii(string input,string output)
{
    if (input.length()==0)
    {
        cout<<"{"<<output<<"}"<<endl;
        return ;
    }
    substrwithascii(input.substr(1),output);
    substrwithascii(input.substr(1),output+input[0]);
    substrwithascii(input.substr(1),output+to_string( toascii(input[0])));

    
}
int main()
{
    string input,output;
    cin>>input;
    substrwithascii(input,output);
    
    return 0;
}