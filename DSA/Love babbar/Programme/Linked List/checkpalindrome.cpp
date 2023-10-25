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

node *reverse(node *head, node *&rev)
{
    if (head->next == NULL)
    {
        rev = new node(head->data);
        rev->next = NULL;
        head = rev;
        return head;
    }
    node *mainhead = reverse(head->next, rev);

    node *p = new node(head->data);
    rev->next = p;
    rev = p;
    rev->next = NULL;
    return mainhead;
}
bool checkpalindrome(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    node *rev = NULL;
    rev = reverse(head, rev);

    while(rev!=NULL && head!=NULL){
        if(rev->data!=head->data){
            return false;
        }
        rev=rev->next;
        head=head->next;
    }
    return true;

}
bool palindrome(node* &head,node*rev){
    if(rev==NULL){
        return true;
    }
     bool check= palindrome(head,rev->next);
     if(check==false){
         return false;
     }
     if(head->data==rev->data){
         head=head->next;
         return true;
     }
     else
     return false;

}

int main()
{
    node *head = new node(10);
    node *tail = head;
    inserattail(tail, 55);
    inserattail(tail, 44);
    inserattail(tail, 5);
    inserattail(tail, 10);
    print(head);
    cout<<palindrome(head,head);

    return 0;
}