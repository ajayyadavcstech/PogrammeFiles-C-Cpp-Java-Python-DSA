#include<iostream>
using namespace std;
int a=5;

int main()
{ int a=10;{
int a=15;
cout<<"A="<<a<<endl; // As two copy of a is present it will be ambigous for compiler to decide which a is used
cout<<"Global A is: "<<::a;
return 0;}
}
