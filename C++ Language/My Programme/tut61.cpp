#include<iostream>
#include<fstream> 
using namespace std;

int main()
{
    // connecting file with hout steam
    ofstream hout("sampletut60.txt");

    // crating a name string and filling it string entered by user
    cout<<"Enter your name";
    string name;
    cin>>name;

    hout<<"My name is "+ name;

    hout.close();//use to disconnect the file

    ifstream hin("sampleb.txt");
    
    //writing string 
    string my_name;
    hin>>my_name;
    cout<<my_name;
    
    return 0;
}