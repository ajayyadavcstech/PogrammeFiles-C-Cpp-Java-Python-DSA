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
void reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *pre = NULL;
    node *cur = head;
    node *forw = head->next;
    while (forw != NULL)
    {
        cur->next = pre;
        pre = cur;
        cur = forw;
        forw = forw->next;
    }
    cur->next = pre;
    head = cur;
}
void reverserecur(node* & head, node* pre,node* cur,node* forw){
    if(forw==NULL){
        cur->next=pre;
        head=cur;
        return;
    }
    cur->next=pre;
    pre=cur;
    cur=forw;
    forw=forw->next;
    reverserecur(head,pre,cur,forw);

}
node* reversenode(node* head){
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* mainhead=reversenode(head->next);
    head->next->next=head;
    head->next=NULL;
    return mainhead;
}
int main()
{
    node *head = new node(6);
    node *tail = head;
    inserattail(tail, 7);
    inserattail(tail, 4);
    inserattail(tail, 9);
    inserattail(tail, 1);
    inserattail(tail, 3);
    print(head);
    head= reversenode(head);
    print(head);

    return 0;
}