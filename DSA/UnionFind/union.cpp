#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int parent(vector<int>&v,int a){
    if(v[a]==a) return a;
    return parent(v,v[a]);
}
void Uni(vector<int> &v,int a,int b){
    int parent_1 = parent(v,a);
    int parent_2 = parent(v,b);
    v[b] = parent_1;
}


int main()
{
    vector<int> v(9);
    for(int i=0;i<9;i++) v[i] = i;
    Uni(v,0,1);
    Uni(v,2,7);
    Uni(v,3,6);
    cout<<parent(v,0)<<" "<<parent(v,1)<<endl;

    return 0;
}