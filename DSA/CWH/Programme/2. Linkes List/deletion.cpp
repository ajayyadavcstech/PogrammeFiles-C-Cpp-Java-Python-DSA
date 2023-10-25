#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void travesal(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void creating_node(node *head, int n) //creating node using loop
{
    cout << "Enter the 1st value ";
    cin >> head->data;
    for (int i = 1; i < n; i++)
    {
        node *ptr = new node;
        head->next = ptr;
        ptr->next = NULL;
        cout << "Enter the " << i + 1 << "th value ";
        cin >> ptr->data;
        head = head->next;
    }
}

node *deleting_head(node *head) //deleting head node in O(1) constant time
{
    node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

void deleting_at_index(node *head, int index) //deleting any index
{
    int i = 1;
    while (i != index)
    {
        head = head->next;
        i++;
    }
    node* ptr=head->next;
    head->next=ptr->next;
    free(ptr);
}

void deleting_endnode(node* head)
{
    node* ptr=head->next;
    while (ptr->next!=NULL)
    {
        head=head->next;
        ptr=ptr->next;
    }
    head->next=NULL;
    free(ptr);
    
}

void delting_value(node* head,int value)
{
    node* ptr=head->next;
    while (ptr->data!=value )
    {
        if (ptr->next==NULL)
        {
            cout<<"value not found"<<endl;
            return;
        }
        
        head=head->next;
        ptr=ptr->next;
    }
    head->next=ptr->next;
    free(ptr);
    
}
int main()
{
    node *head = new node;
    creating_node(head, 5);
    travesal(head);

    // head = deleting_head(head);
    // travesal(head);

    // deleting_at_index(head,2);
    // travesal(head);

    // deleting_endnode(head);
    // travesal(head);

    delting_value(head,4);
    travesal(head);

    return 0;
}