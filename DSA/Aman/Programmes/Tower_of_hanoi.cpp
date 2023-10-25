#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char src,char helper,char destination)
{
    if (n==0)
    {
        return;
    }

    TowerOfHanoi(n-1,src,destination,helper);
    cout<<"move from "<<src<<" to "<<destination<<endl; 
    TowerOfHanoi(n-1,helper,src,destination);   
}
int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n,'A','B','C');
    
    return 0;
}