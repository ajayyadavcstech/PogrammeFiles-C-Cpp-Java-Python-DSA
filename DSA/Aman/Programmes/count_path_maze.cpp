#include<iostream>
using namespace std;
int countPathMaze(int n,int i, int j)
{
    if (i==n && j==n)
    {
        return 1;
    }
    if (i>n || j>n)
    {
        return 0;
    }
    return countPathMaze(n,i,j+1)+countPathMaze(n,i+1,j);

    
}
int main()
{
    int n;
    cin>>n;
    cout<<countPathMaze(n,1,1);
    
    return 0;
}