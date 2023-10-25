#include <iostream>
using namespace std;

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

void InorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left);
    cout << root->data << " "; // In between Inorder
    InorderTraversal(root->right);
}
Node *insertinbst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = insertinbst(root->left, data);
    }
    else
    {
        root->right = insertinbst(root->right, data);
    }
    return root;
}
void build_bst(Node *&root)
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    while (data != -1)
    {
        root = insertinbst(root, data);
        cin >> data;
    }
}
int main()
{
    Node* root = NULL;
    build_bst(root);
    InorderTraversal(root);

    return 0;
}
// 10 8 21 7 27 5 4 3 -1