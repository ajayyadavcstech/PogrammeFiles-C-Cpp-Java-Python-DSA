#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sampletut60.txt");
    out<<"This is me";
    out<<" This is me/n";
    out<<" This also me";
    out<<" This is nice";

    out.close();

    ifstream in;
    in.open("sampleb.txt");

    string st,st2;
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)  
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();
    
    return 0;
}