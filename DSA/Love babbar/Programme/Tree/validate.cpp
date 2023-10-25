#include <iostream>
using namespace std;
template <typename t>
class BinaryTreeNode
{
public:
    t data;
    BinaryTreeNode<t> *left;
    BinaryTreeNode<t> *right;
    BinaryTreeNode(t data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
BinaryTreeNode<int> *insertinbst(BinaryTreeNode<int> *root, int data)
{
    if (root == NULL)
    {
        root = new BinaryTreeNode<int>(data);
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
void build_bst(BinaryTreeNode<int> *&root)
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
void InorderTraversal(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left);
    cout << root->data << " "; // In between Inorder
    InorderTraversal(root->right);
}
bool validateBST(BinaryTreeNode<int> *root)
{
    // Write your code here
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->left != NULL && root->right == NULL)
    {
        bool left = validateBST(root->left);
        bool cur = ((root->data > root->left->data) ? true : false);
        if (left && cur)
        {
            return true;
        }
        return false;
    }
    if (root->left == NULL && root->right != NULL)
    {
        bool right = validateBST(root->right);
        bool cur = ((root->data < root->right->data) ? true : false);
        if (right && cur)
        {
            return true;
        }
        return false;
    }

    if (root->left != NULL && root->right != NULL)
    {
        bool left = validateBST(root->left);
        bool right = validateBST(root->right);
        bool cur = ((root->data > root->left->data && root->data < root->right->data) ? true : false);
        if (left && right && cur)
        {
            return true;
        }
        return false;
    }
}
bool Replace(BinaryTreeNode<int> *root, int value, int rvalue)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == value)
    {
        root->data = rvalue;
        return true;
    }
    if (Replace(root->left, value, rvalue) || Replace(root->right, value, rvalue))
    {
        return true;
    }
    return false;
}
bool check(BinaryTreeNode<int> *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data < min || root->data > max)
    {
        return false;
    }
    bool left = check(root->left, min, root->data);
    bool right = check(root->right, root->data, max);
    if (left && right)
    {
        return true;
    }
    return false;
}
int main()
{
    BinaryTreeNode<int> *root = NULL;
    build_bst(root);
    InorderTraversal(root);
    cout << endl;
    cout << check(root, INT_MIN, INT_MAX) << endl;
    // Replace(root,28,46);
    // InorderTraversal(root);
    // cout<<endl;
    // cout<<validateBST(root);

    return 0;
}
