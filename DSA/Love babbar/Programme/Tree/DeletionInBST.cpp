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
int minBST(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}
int maxBST(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}
Node *insertInBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
        root->right = insertInBST(root->right, data);
    return root;
}
void buidBST(Node *&root)
{
    int data;
    cout << "Enter Data " << endl;
    cin >> data;
    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
}
void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
Node *DeleteInBST(Node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == data)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            root->data = maxBST(root->left);
            root->left = DeleteInBST(root->left, root->data);
        }
    }
    else if (root->data > data)
    {
        root->left = DeleteInBST(root->left, data);
    }
    else
        root->right = DeleteInBST(root->right, data);

    return root;
}
int main()
{
    Node *root = NULL;
    buidBST(root);
    Inorder(root);
    cout << endl;
    cout << "Min Element : " << minBST(root) << endl;
    cout << "Max Element : " << maxBST(root) << endl;
    root = DeleteInBST(root, 10);
    cout << "Here" << endl;
    Inorder(root);

    return 0;
}