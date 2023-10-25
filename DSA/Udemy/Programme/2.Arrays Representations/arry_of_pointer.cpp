#include<iostream>
using namespace std;

int main()
{
    int *p[3];
    for (int i = 0; i < 3; i++)
    {
        p[i]=new int [3];
    }for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<&p[i][j]<<" ";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<&p[i]<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<p[i]<<endl;
    }
    int **a;
    a=new int *[4];
    for (int i = 0; i < 4; i++)
    {
        a[i]=new int [5];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<&a[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<&a[i]<<endl;
    }
    cout<<endl<<&a;
    
    

    return 0;
}