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
bool isCircular(node *head)
{
    // Write your code here.
    if (head == NULL)
       return true;
    node *pt = head;
    do
    {
        pt = pt->next;
    } while (pt != NULL && pt != head);
    if (pt == NULL)
        return false;
    return true;
}
void makcircular(node *head)
{
    node *pt = head;
    while (pt->next != NULL)
    {
        pt = pt->next;
    }
    pt->next = head;
}
int main()
{
    node *head = new node(10);
    cout << isCircular(NULL)<<endl;
    
    node *tail = head;
    inserattail(tail, 45);
    inserattail(tail, 44);
    inseratpos(head, 2, 55);
    inseratpos(head, 1, 5);
    inseratpos(head, 1, 52);
    print(head);
    makcircular(head);
    cout << isCircular(head);
    return 0;
}