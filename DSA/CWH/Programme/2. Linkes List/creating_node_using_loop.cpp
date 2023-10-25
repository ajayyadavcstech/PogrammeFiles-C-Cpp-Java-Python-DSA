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
    cout<<endl;
}
void creating_node(node *head, int n)
{
    cout<<"Enter the 1st value ";
    cin>>head->data;
    for (int i = 1; i < n; i++)
    {
        node *ptr = new node;
        head->next = ptr;
        ptr->next = NULL;
        cout << "Enter the "<<i+1<<"th value ";
        cin >> ptr->data;
        head = head->next;
    }
}
int main()
{
    node *head=new node;
    creating_node(head,5);
    travesal(head);

    return 0;
}