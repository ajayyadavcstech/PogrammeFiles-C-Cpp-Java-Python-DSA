#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;
class graph
{
    unordered_map<int, list<int>> adj;

public:
    void insert(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void BFS(int n)
    {
        queue<int> q;
        unordered_map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp[i])
                continue;
            q.push(i);
            mp[q.front()] = true;
            while (!q.empty())
            {
                int top = q.front();
                q.pop();
                for (auto v : adj[top])
                {
                    if (mp.find(v) == mp.end())
                    {
                        q.push(v);
                        mp[v] = true;
                    }
                }

                cout << top << " ";
            }
        }
        cout << endl;
    }
    void dfsfun(unordered_map<int, bool> &visited, int node)
    {

        cout << node << " ";
        visited[node] = 1;
        for (auto val : adj[node])
        {
            if (!visited[val])
            {
                dfsfun(visited, val);
            }
        }
    }
    void DFS(int n)
    {
        unordered_map<int, bool> visited;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfsfun(visited, i);
            }
        }
        cout << endl;
    }
    void print()
    {
        unordered_map<int, list<int>>::iterator it = adj.begin();
        while (it != adj.end())
        {
            cout << it->first << "-->";
            it->second.sort();
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
    graph g;
    g.insert(0, 1);
    g.insert(1, 2);
    g.insert(2, 4);
    g.insert(3, 5);
    g.print();
    cout << "bfs : ";
    g.BFS(6);
    cout << "dfs : ";
    g.DFS(6);

    return 0;
}