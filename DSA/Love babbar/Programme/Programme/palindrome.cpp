#include <iostream>
#include <vector>
using namespace std;
int getsize(char arr[])
{
  int  count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
bool ispalindrome(char arr[])
{
    int s = 0;
    int e = getsize(arr) - 1;
    while (s < e)
    {
        if (arr[s++] != arr[e--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char a[20];
    cout<<"Enter name ";
    cin>>a;
    cout<<a<<endl;
    cout<<ispalindrome(a);
    


    return 0;
}