// In circular Linked List last node connected to the head node
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
void creating_LL(node *head, int n)
{
    node *p = head;              //pointing another node to head
    cout << "Enter the 1 node "; //set first data
    cin >> head->data;
    for (int i = 1; i < n; i++) //set all data
    {
        node *ptr = new node; //creating new node
        cout << "Entr the " << i + 1 << " node ";
        cin >> ptr->data; // set data of node
        p->next = ptr;    //connecting node to previous one
        p = ptr;          //updating pointer to last node
    }
    p->next = head; //connecting last node to the first node
}

void traversal(node *head) // In traversal there is no null pointer so condtion is differnet
{
    node *ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
}

node *inserting_at_head(node *head, int data) //To insert at head in circular node first we have to traverse till end so that we are able to link last node with new inserting node
{ 
    node *ptr = head;
    do
    {
        ptr = ptr->next;
    } while (ptr->next != head);
    node *p = new node;
    ptr->next = p;
    p->next = head;
    p->data = data;

    return p; // now our new head is p so we are returning p
}

void insert_at_index(node* head,int data,int index)
{
    int i=1;
    while (i!=index)
    {
        head=head->next;
        i++;
    }
    node * ptr=new node;
    ptr->data=data;
    ptr->next=head->next;
    head->next=ptr;
    
}
int main()
{
    node *head = new node;
    creating_LL(head, 5);
    traversal(head);

    head = inserting_at_head(head, 33);
    traversal(head);

    insert_at_index(head,11,3);
    traversal(head);

    
    return 0;
}