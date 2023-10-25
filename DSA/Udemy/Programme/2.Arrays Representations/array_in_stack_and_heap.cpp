#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n]={1,2,3,4,5};//initialize in stack memory 
    int *p =new int [n];//initialize int heap memory;
    //int *p=malloc(5*sizeof(int))   here malloc function return void type pointer so we have to typcast to requied data type like (int*)
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
      for (int i = 0; i < n; i++)
    {
        cout<<p++<<endl;
    }

    return 0;
}