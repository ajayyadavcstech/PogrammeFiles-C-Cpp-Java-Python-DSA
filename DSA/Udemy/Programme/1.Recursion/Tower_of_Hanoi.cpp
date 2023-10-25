#include<iostream>
using namespace std;
void Toh(int n,char source,char helper,char destination )
{
    if(n==0)
    return;
    Toh(n-1,source,destination,helper);
    cout<<"Move "<<n<<"th disk from "<<source<<" to "<<destination<<endl;
    Toh(n-1,helper,source,destination);
}
int main()
{
    cout<<"No of Tower"<<endl;
    int n;
    cin>>n;
    Toh(n,'A','B','C');
    
    return 0;
}