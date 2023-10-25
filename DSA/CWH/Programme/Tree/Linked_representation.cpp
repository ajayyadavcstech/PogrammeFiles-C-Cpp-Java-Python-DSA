#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *create_node(int data)
{
    node *n = new node;
    n->data = data;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}
int main()
{
    // node* root=new node; //creating root node
    // root->left=nullptr;
    // root->right=nullptr;
    // root->data=5;

    // node* p1=new node;//creating left node
    // p1->left=nullptr;
    // p1->right=nullptr;
    // p1->data=4;

    // node* p2=new node; //creting right node
    // p2->left=nullptr;
    // p2->right=nullptr;
    // p2->data=6;

    // //linking node
    // root->left=p1;
    // root->right=p2;

    node *p = new node;
    node *p1 = new node;
    node *p2 = new node;

    p->left=p1;
    p->right=p2;

    return 0;
}