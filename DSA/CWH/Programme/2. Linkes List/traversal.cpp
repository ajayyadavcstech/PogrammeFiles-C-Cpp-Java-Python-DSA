#include<iostream>
using namespace std;
struct node{
    int data ; //4 byte 
    node * next; // 4 byte 
};
void traversalnode(node *ptr)
{
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;          // pointing to the next node 
    }
    cout<<endl;
    
}
int main()
{
    // creating node pointer in stack
    node *head,*second ,*third;

    // allocating memory in heap
    head=new node;
    second=new node;
    third = new node;

    //linking first and second node
    head->data=4;
    head->next=second;

    //linking second and third node
    second->data=6;
    second->next=third;

    //linking third to null 
    third->data=9;
    third->next=NULL;

    //travershig linked list 
    traversalnode(head);

    //inseting node bw second and thid
    node *insert=new node;
    second->next=insert;
    insert->data=8;
    insert->next=third;

    //traversing after insertion
    traversalnode(head);

   
    return 0;
}