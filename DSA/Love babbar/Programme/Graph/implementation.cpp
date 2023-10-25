#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{
    unordered_map<int, list<int>> adj;

public:
    void inseret(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (!directed)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        unordered_map<int, list<int>>::iterator it = adj.begin();
        while (it != adj.end())
        {
            cout << it->first << " -> ";
            for (auto i : it->second)
            {
                cout << i << " ";
            }
            cout << endl;
            it++;
        }
    }
};

int main()
{
    // undirected graph 
    // graph g;
    // g.inseret(1,2,false);
    // g.print();
    // g.inseret(1,3,0);
    // g.inseret(3,4,0);
    // g.inseret(2,4,0);
    // g.print();


    // Directed graph
    // graph g;
    // g.inseret(1,2,true);
    // g.inseret(3,1,1);
    // g.inseret(3,4,1);
    // g.inseret(4,5,1);
    // g.inseret(2,4,1);
    // g.inseret(2,5,1);
    // g.print();

    

    return 0;
}