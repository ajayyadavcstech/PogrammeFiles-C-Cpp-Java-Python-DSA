#include <iostream>
using namespace std;

//creating node
struct node
{
    int data;
    node *next;
};

//traversing the node
void traversal(node *ptr)
{ //traversal in O(n) time
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

//case:1 insertion at head
node *insert_at_head(node *ptr, int data) // insertion in O(1) constant time
{
    node *head = new node;
    head->data = data;
    head->next = ptr;
    return head;
}

//case:2 insertion between nodes
node *insert_at_index(node *head, int index, int data) // insertion in O(n) time because we traversing the pointer to befor the index
{
    node *ptr = new node;
    node *p = head;    // pointing to 0th index
    int i = 1;         //starting traversal from first index because initially pointer pointing to the 0th index
    while (i != index) //initially p is pointing to  0th index (head) so we start i from to index (index-1) because at last we want our poiner at before the inserting index
    {
        p = p->next; //traversing pointer from index 1 to (indedx-1)
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

//case:3 insertion at end
node *insert_at_end(node *head, int data)
{
    node *ptr = new node;
    node *p = head;
    while (true)
    {
        if (p->next == NULL) //we are traversing pointer till null so time complexcity is O(n)
        {
            ptr->data = data;
            p->next = ptr;
            ptr->next = NULL;
            return head;
        }
        p = p->next;
    }
}

//case:4 insertoin after given node
node *insert_after_node(node *head, int data, node *previous) //we are not traversing insted we are directly pointing to the next node in O(1) time
{
    node *ptr = new node;
    ptr->data = data;
    ptr->next = previous->next;
    previous->next = ptr;
    return head;
}
int main()
{
    //creating pointer for nodes
    node *head, *second, *third, *fourth;

    //creating space in heap using pointer
    head = new node;
    second = new node;
    third = new node;
    fourth = new node;

    // linking the nodes
    head->data = 4;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = NULL;

    // traversing the node
    traversal(head);

    //case 1. inserting node at head
    head = insert_at_head(head, 7);
    traversal(head);

    //case 2. inserting node between the node using index
    head = insert_at_index(head, 2, 100);
    traversal(head);

    //case 3. inserting node at end
    head = insert_at_end(head, 33);
    traversal(head);

    //case 4. inserting node at after given pointer node (address of node given)
    head = insert_after_node(head, 45, second);
    traversal(head);

    return 0;
}