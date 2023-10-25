#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node *buidlTree(Node *root)
{
    cout << "Enter value" << endl;
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    Node *temp = new Node(d);
    cout << "Left of " << d << endl;
    temp->left = buidlTree(temp->left);
    cout << "Right of " << d << endl;
    temp->right = buidlTree(temp->right);
    return temp;
}
Node *findpre(Node *cur)
{
    Node *root = cur;
    if (root->left == NULL)
    {
        return NULL;
    }
    root = root->left;
    while (root->right != NULL && root->right != cur)
    {
        root = root->right;
    }
    return root;
}
void morris(Node *root)
{
    Node *cur = root;
    while (cur != NULL)
    {
        Node *pre = findpre(cur);
        if (pre == NULL)
        {
            cout << cur->data << " ";
            cur = cur->right;
        }
        else if (pre->right == NULL)
        {
            pre->right = cur;
            cur = cur->left;
        }
        else if (pre->right == cur)
        {
            pre->right = NULL;
            cout << cur->data << " ";
            cur= cur->right;
        }
    }
    cout << endl;
}
void Inorder(Node* root){
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = buidlTree(root);
    morris(root);

    return 0;
}
//tree    : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 \n
//Inorder : 4 2 7 5 1 3 6 