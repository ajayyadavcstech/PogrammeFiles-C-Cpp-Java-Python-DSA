#include <iostream>
#include <fstream>
/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream
3. ofstrem

In order to work with files in c++ , you have to open it . primarly , there are 2 ways to open files in c++
1.Using the constructor 
2.Using the member function open() of class
*/
using namespace std;

int main()
{
    string st = "ajay ajjuawm";
    string st2;
    // // opeing files using constructor and writing it
    // ofstream out("sampletut60.txt"); // write operation
    // out << st;

    // opeing files using constructor and writing it
    ifstream in("sampleb.txt"); // write operation
    getline(in,st2);
    cout<<st2;

    return 0;
}