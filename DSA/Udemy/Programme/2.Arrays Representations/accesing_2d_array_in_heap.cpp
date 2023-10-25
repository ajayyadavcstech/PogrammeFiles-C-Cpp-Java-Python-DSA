#include<iostream>
using namespace std;

int main()
{
    int *p[3];
    for (int i = 0; i < 3; i++)
    {
        *(p+i)=new int [4];
    }
    int a=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            p[i][j]=a;
            a++;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
        
    }
     cout<<&p<<" " <<p<<endl<<endl;//a is storing base address of row
    for (int i = 0; i < 3; i++)
    {
        cout<<&p[i]<<" "<<p[i]<<endl;//each row store base address of column
    }
    cout<<endl;
   
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<(*(p+i)+j)<<" ";//here we are accesing values using two pointer (2d array=2 pointer)
        }
        cout<<endl;
        
    }
    
    
    return 0;
}