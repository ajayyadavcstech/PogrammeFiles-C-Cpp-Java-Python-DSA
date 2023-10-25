#include<iostream>
using namespace std;
void linearRecursion(int n)
{
    if (n>0)
    {
        cout<<n<<" ";// some processing
        linearRecursion(n-1); // calling between code
        cout<<n<<" ";// some processing
    }
    
}
int main()
{
    int n;
    cin>>n;
    linearRecursion(n);
    
    return 0;
}