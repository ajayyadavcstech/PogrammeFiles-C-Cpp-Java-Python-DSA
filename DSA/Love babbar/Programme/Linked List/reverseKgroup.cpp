#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        cout << "calling destructor " << data << endl;
    }
};
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void inserattail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void inseratpos(node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }
    node *pt = head;
    node *temp = new node(data);
    int i = 1;
    for (1; i < pos - 1; i++)
    {
        pt = pt->next;
    }
    temp->next = pt->next;
    pt->next = temp;
}
node *reversek(node *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    int cnt = 1;
    node *pre = NULL;
    node *cur = head;
    node *forw = head->next;
    while (forw != NULL && cnt < k)
    {
        cnt++;
        cur->next = pre;
        pre = cur;
        cur = forw;
        forw = forw->next;
    }
    cur->next = pre;
    head->next=reversek(forw,k);

    return cur;
}
int main()
{
    node *head = new node(10);
    node *tail = head;
    inserattail(tail, 45);
    inserattail(tail, 44);
    inseratpos(head, 2, 55);
    inseratpos(head, 1, 5);
    inseratpos(head, 1, 52);
    inseratpos(head, 1, 7);
    print(head);
    head= reversek(head,2);
    print(head);

    return 0;
}