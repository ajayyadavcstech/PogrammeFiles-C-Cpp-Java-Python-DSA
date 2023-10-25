#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "calling destructor " << data << endl;
    }
};
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void inserattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void inseratpos(Node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }
    Node *pt = head;
    Node *temp = new Node(data);
    int i = 1;
    for (1; i < pos - 1; i++)
    {
        pt = pt->next;
    }
    temp->next = pt->next;
    pt->next = temp;
}
void reverse(Node *&pre, Node *cur, Node *forw)
{
    Node *pr = NULL;
    Node *cu = cur;
    Node *fo = cur;
    while (cu != forw)
    {
        fo = fo->next;
        cu->next = pr;
        pr = cu;
        cu = fo;
    }
    pre->next->next = forw;
    pre->next = pr;
    pre = cur;
}

Node *getListAfterReverseOperation(Node *head, int n, int b[])
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *ptr = new Node(0);
    ptr->next = head;

    Node *pre = ptr;
    Node *cur = head;
    Node *forw = cur;

    int count = 0;
    Node *pt = head;
    while (pt != NULL)
    {
        count++;
        pt = pt->next;
    }

    int i = 0;
    while (b[i] < count && i < n)
    {
        if (b[i] == 0 || b[i] == 1)
        {

            if (b[i] == 1)
            {
                pre = cur;
                cur = cur->next;
                forw = cur;
                count -= 1;
            }
            i++;

            continue;
        }
        int j = 0;
        while (j < b[i] - 1)
        {
            forw = forw->next;
            j++;
        }

        reverse(pre, cur, forw->next);

        cur = pre->next;
        forw = cur;
        count -= b[i];
        i++;
    }
    if(i==n){
        return ptr->next;
    }
    forw = NULL;
    reverse(pre, cur, forw);
    head = ptr->next;
    return head;
}
int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    inserattail(tail, 2);
    inserattail(tail, 3);
    inserattail(tail, 4);
    inserattail(tail, 5);
    inserattail(tail, 6);
    inserattail(tail, 7);
    inserattail(tail, 8);
    inserattail(tail, 9);
    inserattail(tail, 10);
    inserattail(tail, 11);
    print(head);
    int arr[] = {2,3,4};
    int n = 3;
    head = getListAfterReverseOperation(head, n, arr);
    cout << "printing..." << endl;
    print(head);

    return 0;
}