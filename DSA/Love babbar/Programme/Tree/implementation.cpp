//                                       Implementation using recurssion & LevelOrder : Traversal Inoreder Preorder Postorder LevelOrder

#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void LevelOrderTraversal(node *root) // levelorder traversal (level by level printing); Level order means Only queue used to solve :
{
    if (root == NULL)
    {
        cout << "Tree is empty " << endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separater of one level to next level
    while (!q.empty() && q.front() != NULL)
    {
        if (root->left != NULL)
        {
            q.push(root->left);
        }
        if (root->right != NULL)
        {
            q.push(root->right);
        }
        cout << q.front()->data << " ";
        q.pop();
        if (q.front() == NULL)
        {
            cout << endl;
            q.push(NULL);
            q.pop();
        }
        root = q.front();
    }
    cout << endl;
}

// 1. Inorder Traversal   :  Left (Root) Rigth  :  Root is in between means in their order  : L D R (D==data node)
// 2. preorder Traversal  :  (Root) Left Right  :  Root at Left means pre order             : D L R
// 3. postorder Traversal :  Left Right (Root)  :  Root at right means post order           ; L D N

void InorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left);
    cout << root->data << " "; // In between Inorder
    InorderTraversal(root->right);
}
void preorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " "; // pre order
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " "; // post order
}
node *createtree()
{
    cout << "Enter data " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node *root = new node(data);

    cout << "creating left for " << root->data << endl;
    root->left = createtree();
    cout << "creating right for " << root->data << endl;

    root->right = createtree();

    return root;
}
void createLevelOrder(node *&root)
{ // creating tree using level order logic :
    cout << "Enter root value : ";
    int data;
    cin >> data;
    if (data == -1)
    {
        root == NULL;
        return;
    }
    node *newnode = new node(data);
    newnode->data = data;
    root = newnode;

    queue<node *> q;
    q.push(root);
    node *temp = root;
    while (!q.empty())
    {
        cout << "Enter Left of " << temp->data << " ";
        cin >> data;
        if (data != -1)
        {
            node *leftnode = new node(data);
            temp->left = leftnode;
            q.push(leftnode);
        }
        cout << endl;

        cout << "Enter Right of " << temp->data << " ";
        cin >> data;
        if (data != -1)
        {
            node *rightnode = new node(data);
            temp->right = rightnode;
            q.push(rightnode);
        }
        cout << endl;
        q.pop();
        temp = q.front();
    }
}
int main()
{
    node *root = NULL;
    // root = createtree(); // 5 4 7 -1 -1 9 -1 -1 3 8 -1 8 -1 -1 12 -1 9 -1 -1 \n
    // LevelOrderTraversal(root);
    createLevelOrder(root); // 5 4 3 7 9 8 12 -1 -1 -1 -1 -1 8 -1 9 -1 -1 -1 -1  \n
    cout << "Level order : " << endl;
    LevelOrderTraversal(root);
    cout << "Inorder : ";
    InorderTraversal(root);
    cout << endl
         << "pre order : ";
    preorderTraversal(root);
    cout << endl
         << "post order : ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}