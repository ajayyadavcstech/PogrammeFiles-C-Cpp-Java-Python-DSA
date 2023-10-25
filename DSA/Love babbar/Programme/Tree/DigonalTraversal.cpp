#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <map>
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void diagonalUsingInorder(Node *root, map<int, vector<int>> &mapping, int row, int col)
{
    if (root == NULL)
    {
        return;
    }
    diagonalUsingInorder(root->left, mapping, row + 1, col - 1);
    mapping[col - row].push_back(root->data);
    diagonalUsingInorder(root->right, mapping, row + 1, col + 1);
}
vector<int> diagonal(Node *root)
{
    // your code here
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, vector<int>> mapping;
    queue<pair<Node *, pair<int, int>>> q;
    q.push(make_pair(root, make_pair(0, 0)));
    while (!q.empty())
    {
        pair<Node *, pair<int, int>> p = q.front();
        q.pop();
        if (p.first->left != NULL)
        {
            q.push(make_pair(p.first->left, make_pair(p.second.first + 1, p.second.second - 1)));
        }
        if (p.first->right != NULL)
        {
            q.push(make_pair(p.first->right, make_pair(p.second.first + 1, p.second.second + 1)));
        }
        mapping[p.second.second - p.second.first].push_back(p.first->data);
    }
    map<int, vector<int>>::reverse_iterator it;
    for (it = mapping.rbegin(); it != mapping.rend(); it++)
    {
        for (int j = 0; j < it->second.size(); j++)
        {
            ans.push_back(it->second[j]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}