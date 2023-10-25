#include <iostream>
#include <map>
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
};

#include <map>

Node *reverse(Node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    Node *mainhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return mainhead;
}

Node *lastAppearance(Node *head)
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    head = reverse(head);
    map<int, bool> check;

    Node *cur = head;
    Node *pre = NULL;
    Node *forw = cur;

    while (cur != NULL)
    {
        forw = cur->next;
        if (check[cur->data] == true)
        {
            pre->next = forw;
            cur = forw;
        }
        else
        {
            check[cur->data] = true;
            pre = cur;
            cur = forw;
        }
    }
    head = reverse(head);
    return head;
}
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
void deletepos(Node *&head, int pos)
{
    Node *pt = head;
    if (pos == 1)
    {
        head = head->next;
        delete pt;
        return;
    }
    int i = 1;
    while (i < pos - 1)
    {
        pt = pt->next;
        i++;
    }
    Node *cur = pt->next;
    pt->next = cur->next;
    delete cur;
}
int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    inserattail(tail, 45);
    inserattail(tail, 44);
    inserattail(tail, 45);
    inserattail(tail, 34);
    inserattail(tail, 33);
    inserattail(tail, 55);
    print(head);
    head=reverse(head);
    print(head);
    head=reverse(head);
    head=lastAppearance(head);
    print(head);

    return 0;
}