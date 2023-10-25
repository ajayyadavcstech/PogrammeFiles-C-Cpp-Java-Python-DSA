#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int>> adj;
    void insert(int u,int v,bool directed){
        adj[u].push_back(v);
        if(!directed){
            adj[v].push_back(u);
        }
    }
    void print(){
        for(auto node : adj){
            cout<<node.first<<"-->";
            for(auto data : node.second){
                cout<<data<<" ";
            }cout<<endl;
        }
    }
};
int main()
{
    graph g;
    g.insert(0,1,false);
    g.insert(1,2,false);
    g.insert(2,3,false);
    g.insert(3,4,false);
    g.insert(4,0,false);
    g.print();

    return 0;
}