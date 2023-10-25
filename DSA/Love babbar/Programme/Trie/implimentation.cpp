#include <iostream>
using namespace std;
#include <string>
class TrieNode
{
public:
    char data;
    TrieNode *child[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertutil(string s, TrieNode *root)
    {
        if (s.size() == 0)
        {
            root->isTerminal = true;
            return;
        }
        int ind = s[0] - 'a';
        if (root->child[ind] != NULL)
        {
            root = root->child[ind];
        }
        else
        {
            TrieNode *Node = new TrieNode(s[0]);
            root->child[ind] = Node;
            root = root->child[ind];
        }
        insertutil(s.substr(1), root);
    }
    void insert(string s)
    {
        insertutil(s, root);
    }
    bool utilsearch(TrieNode *root, string s)
    {
        if (s.size() == 0)
        {
            return root->isTerminal;
        }
        int ind = s[0] - 'a';
        TrieNode *node = root->child[ind];
        if (node == NULL)
        {
            return false;
        }

        return utilsearch(root->child[ind], s.substr(1));
    }
    bool search(string s)
    {
        return utilsearch(root, s);
    }
    void eraseutil(TrieNode *root, string s)
    {
        if (s.size() == 0)
        {
            root->isTerminal = false;
            return;
        }
        int ind = s[0] - 'a';
        TrieNode *node = root->child[ind];
        if (node == NULL)
            return;

        eraseutil(node, s.substr(1));
    }
    void erase(string s)
    {
        eraseutil(root, s);
    }
    string utilprefix(string ans, TrieNode *root)
    {
        int totalchild = 0;
        int ind;
        for (int i = 0; i < 26; i++)
        {
            if (root->child[i] != NULL)
            {
                totalchild++;
                ind = i;
            }
        }
        if (totalchild != 1)
            return ans;

        ans.push_back(root->child[ind]->data);
        root = root->child[ind];
        return utilprefix(ans, root);
    }
    string prefix()
    {
        string ans;
        ans = utilprefix(ans, root);
        return ans;
    }
};

int main()
{
    Trie root;
    root.insert("ajay");
    cout << root.search("ajay") << endl;
    cout << root.search("ajayyadav") << endl;
    root.insert("ajayyadav");
    cout << root.search("ajayyadav") << endl;
    cout << root.search("aj") << endl;
    root.erase("aj");
    root.erase("ajay");
    cout << root.search("ajay") << endl;

    return 0;
}
