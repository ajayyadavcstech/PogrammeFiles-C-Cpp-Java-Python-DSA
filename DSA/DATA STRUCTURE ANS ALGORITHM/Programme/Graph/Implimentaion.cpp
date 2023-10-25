#include <iostream>
using namespace std;
#include <unordered_map>
#include <list>
class graph
{
public:
    unordered_map<int, list<int>> mp;
    void addEdge(int u, int v, bool isdirectecd)
    {
        mp[u].push_back(v);
        if (!isdirectecd)
        {
            mp[v].push_back(u);
        }
    }
    void print()
    {
        for (auto i : mp)
        {
            cout << i.first << "--> ";
            for (auto j : i.second)
                cout << j << " ";
            cout << endl;
        }
    }
    void help(int vertex, unordered_map<int, bool> &visited)
    {
        cout << vertex << " ";
        visited[vertex] = 1;
        for (auto val : mp[vertex])
        {
            if (!visited[val])
            {
                help(val, visited);
            }
        }
    }
    void dfs(int n)
    {
        unordered_map<int, bool> visited;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
                help(i, visited);
        }
    }
};
int main()
{
    graph g;
    int m;
    cout << "Total no of edges : ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    int n;
    cout << "Enter no of vertex : ";
    cin >> n;
    g.print();
    g.dfs(n);

    return 0;
}