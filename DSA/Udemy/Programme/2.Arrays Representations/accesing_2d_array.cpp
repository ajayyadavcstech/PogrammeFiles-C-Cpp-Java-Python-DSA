#include<iostream>
using namespace std;

int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<a[i][j]<<" ";  using index we can acess easily
    //     }
    //     cout<<endl;
        
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    cout<<&a<<" " <<a<<endl<<endl;//a is storing base address of row
    for (int i = 0; i < 3; i++)
    {
        cout<<&a[i]<<" "<<a[i]<<endl;//each row store base address of column
    }
    cout<<endl;
   
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<(*(a+i)+j)<<" ";//here we are accesing values using two pointer (2d array=2 pointer)
        }
        cout<<endl;
        
    }
    
    return 0;
}