#include<iostream>
using namespace std;
#include<vector>
int MaxSum(vector<int> &v,int n,int pre){
    if(n==0) return 0;
    int lar = MaxSum(v,n-1,pre);
    if(pre==v.size() || v[pre]>v[n-1]){
        lar = max(lar,MaxSum(v,n-1,n-1) + v[n-1]);
    }
    return lar;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<MaxSum(v,n,n);

    

    return 0;
}