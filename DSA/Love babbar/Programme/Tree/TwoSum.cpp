#include <iostream>
using namespace std;

// *************************************************************

//     Following is the Binary Tree node structure:
template <typename t>
class TreeNode
{

public:
    t data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(t data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
        {
            delete left;
        }

        if (right)
        {
            delete right;
        }
    }
};

// ************************************************************
void flattenIntoLL(TreeNode<int> *root, TreeNode<int> *&head, TreeNode<int> *&pre)
{
    if (root == NULL)
    {
        return;
    }
    flattenIntoLL(root->left, head, pre);

    if (head == NULL)
    {
        head = root;
        pre = root;
    }
    else
    {
        pre->right = root;
        root->left = pre;
        pre = root;
    }

    flattenIntoLL(root->right, head, pre);
}
TreeNode<int> *merge(TreeNode<int> *head1, TreeNode<int> *head2)
{
    TreeNode<int> *head = new TreeNode<int>(-1);
    TreeNode<int> *root = head;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            root->right = head1;
            head1->left = NULL;
            root = root->right;
            head1 = head1->right;
            root->right = NULL;
        }
        else
        {
            root->right = head2;
            head2->left = NULL;
            root = root->right;
            head2 = head2->right;
            root->right = NULL;
        }
    }
    if (head1 == NULL)
    {
        root->right = head2;
        head2->left = root;
    }
    else
    {
        root->right = head1;
        head1->left = root;
    }

    return head->right;
}
TreeNode<int> *findmid(TreeNode<int> *root, TreeNode<int> *end)
{
    TreeNode<int> *slow = root;
    TreeNode<int> *fast = root;
    while (fast != end && fast->right != end)
    {
        fast = fast->right->right;
        slow = slow->right;
    }
    return slow;
}
TreeNode<int> *CreateBST(TreeNode<int> *root, TreeNode<int> *end)
{
    if (root == end)
    {
        return root;
    }
    TreeNode<int> *mid = findmid(root, end);
    mid->left = CreateBST(root, mid);
    mid->right = CreateBST(mid->right, end);
    return mid;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2)
{
    // Write your code here.
    TreeNode<int> *head1 = NULL;
    TreeNode<int> *head2 = NULL;

    TreeNode<int> *pre = NULL;

    flattenIntoLL(root1, head1, pre);
    pre = NULL;
    flattenIntoLL(root2, head2, pre);

    TreeNode<int> *root = merge(head1, head2);
    return CreateBST(root, NULL);
}
int main()
{

    return 0;
}