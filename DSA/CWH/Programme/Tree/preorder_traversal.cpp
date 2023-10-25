//prorder traversal means first we print node then left node then right node
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *creating_node(int data)
{
    node *n = new node;
    n->data = data;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}
void preorder_traversal(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void postorder_traversal(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}
void inorder_traversal(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}
int main()
{
    node *root = creating_node(3); //creating root node

    node *p1 = creating_node(4); //creting child of root
    node *p2 = creating_node(8);

    node *p1_1 = creating_node(10); //creting child of p1
    node *p1_2 = creating_node(1);

    node *p2_1 = creating_node(9);  //creting child of p2
    node *p2_2 = creating_node(11); //

    root->left = p1; //liking root to child
    root->right = p2;

    p1->left = p1_1; //linking p1 to child
    p1->right = p1_2;

    p2->left = p2_1; //linking p2 to child
    p2->right = p2_2;
    //finally structure of a tree is
    //            3
    //           / \  
    //          /   \
    //         /     \
    //        4       8
    //       / \     / \
    //      10  1   9   11
    cout << "preorder traversal is :";
    preorder_traversal(root);
    cout << endl;

    cout << "postorder traversal is :";
    postorder_traversal(root);
    cout << endl;

    cout << "inorder traversal is :";
    inorder_traversal(root);
    cout << endl;

    return 0;
}