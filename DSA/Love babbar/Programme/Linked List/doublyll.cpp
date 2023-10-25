#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev = NULL;
    node *next = NULL;
    node(int data)
    {
        this->data = data;
    }
    ~node()
    {
        cout << "deleting current node " << data << endl;
    }
};
void print(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int getlen(node *head)
{
    int size = 0;
    while (head != NULL)
    {
        size++;
        head = head->next;
    }
    return size;
}
void insertathead(node *&head, int data)
{
    node *ptr = new node(data);
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}
void inserattail(node *&tail, int data)
{
    node *ptr = new node(data);
    ptr->prev = tail;
    tail->next = ptr;
    tail = ptr;
}
void insetatpos(node *&head, node *&tail, int pos, int data)
{
    node *ptr = new node(data);
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }
    int i = 1;
    node *pre = head;
    while (i < pos - 1)
    {
        pre = pre->next;
        i++;
    }
    if (pre->next == NULL)
    {
        inserattail(tail, data);
        return;
    }
    node *cur = pre->next;
    pre->next = ptr;
    ptr->next = cur;
    cur->prev = ptr;
    ptr->prev = pre;
}
void deleteatpos(node *&head, node *&tail, int pos)
{
    node *ptr = head;
    if (pos == 1)
    {
        head = head->next;
        head->prev = NULL;
        ptr->next = NULL;
        delete ptr;
        return;
    }
    int i = 1;
    while (i < (pos - 1))
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr->next->next == NULL)
    {
        node *cur = ptr->next;
        tail = ptr;
        ptr->next = NULL;
        cur->prev = NULL;
        delete cur;
        return;
    }
    node *cur = ptr->next;
    cur->next->prev = ptr;
    ptr->next = cur->next;
    cur->prev = NULL;
    cur->next = NULL;
    delete cur;
}
int main()
{
    node *head = new node(10);
    node *tail = head;
    print(head);
    cout << getlen(head) << endl;
    insertathead(head, 66);
    print(head);
    insertathead(head, 5);
    insertathead(head, 3);
    print(head);
    inserattail(tail, 9);
    print(head);
    insetatpos(head, tail, 6, 44);
    print(head);
    deleteatpos(head, tail, 4);
    print(head);

    return 0;
}