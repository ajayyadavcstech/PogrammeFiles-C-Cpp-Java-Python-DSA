#include<iostream>
using namespace std;
#include<vector>
int count = 0;
int countCoin(vector<int>& v,int sum,int n){
    count++;
    cout<<sum<<endl;
    if(sum==0) return 1;
    if(n==0 || sum<0) return 0;
    int a =countCoin(v,sum-v[n-1],n);
    int b = countCoin(v,sum,n-1);
    return a+b;
}

int main()
{
    vector<int> v={1,2,3};
    int sum=4;
    cout<<countCoin(v,sum,v.size())<<endl;
    cout<<count<<endl;
    

    return 0;
}