#include<iostream>
using namespace std;



int main()
{
    int n; 
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int check=0;
    for (int  i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-i-1])
        {
            check=1;
            break;
        }
        
    }
    if (check==0)
    {
        cout<<"word is palindrome";
    }
    else
    cout<<"not a palindrome";
    
    

    return 0;
}