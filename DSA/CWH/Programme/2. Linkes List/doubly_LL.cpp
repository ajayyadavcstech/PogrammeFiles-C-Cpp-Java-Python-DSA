//In this every node is linked with next node along with previous node
//It takes one extra space in each node
//In this we are able to travese in both side
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *previous; // pointing to the previous node
    node *next;     // pointing to the next node
};

void creating_node(node *head, int n)
{
    head->previous = NULL;
    cout << "Enter the value at o index ";
    cin >> head->data;
    head->next = NULL;
    for (int i = 1; i < n; i++)
    {
        node *ptr = new node;
        cout << "Enter the value at " << i << " index ";
        cin >> ptr->data;
        ptr->next = head->next;    //It means we are connecting to null
        head->next = ptr;
        ptr->previous = head;
        head = ptr;
    }
}
void traverse_forward(node* head){
   node* ptr=head;
   do
   {
       cout<<ptr->data<<" ";
       ptr=ptr->next;
   } while (ptr!=NULL);
   cout<<endl;
}

void traverse_both_side(node* head)
{
    node* ptr=head;      //pointer pointing on head


    do
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        if (head->next!=NULL) //traversing head pointer till the end
        {
            head=head->next;
        }
        
    } while (ptr!=NULL);//printing value till pointer pointing to the null


    do
    {
        cout<<head->data<<" ";
        head=head->previous;
    } while (head!=NULL);   //traversing head(which is at pointing to the last node) to every previous node till it becomes null
    cout<<endl;
    
}
int main()
{
    node *head = new node;
    creating_node(head,5);
    traverse_forward(head);
    traverse_both_side(head);


    return 0;
}