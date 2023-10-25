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
    }
};
void print(node *&tail)
{
    if (tail == NULL)
    {
        cout << "No data found to print " << endl;
        return;
    }
    node *temp = tail->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}
void insertatarget(node *&tail, int data, int target)
{
    if (tail == NULL)
    {
        cout << "no such data available " << endl;
        return;
    }
    node *head = tail;
    while (head->next->data != target && head->next != tail)
    {
        head = head->next;
    }
    if (head->next == tail && head->next->data != target)
    {
        cout << "data not found " << endl;
        return;
    }
    node *temp = new node(data);
    temp->next = head->next;
    head->next = temp;
}
void insetathead(node *&tail, int data)
{
    if (tail == NULL)
    {
        node *head = new node(data);
        tail = head;
        tail->next = tail;
        return;
    }
    node *temp = new node(data);
    temp->next = tail->next;
    tail->next = temp;
}
void insertattail(node *&tail, int data)
{
    if (tail == NULL)
    {
        node *head = new node(data);
        tail = head;
        tail->next = tail;
        return;
    }
    node *temp = new node(data);
    temp->next = tail->next;
    tail->next = temp;
    tail = tail->next;
}
void deletenode(node *&tail, int target)
{
    if (tail == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    node *head = tail;
    while (head->next->data != target && head->next != tail)
    {
        head = head->next;
    }
    if (head->next == tail && head->next->data != target)
    {
        cout << "data not found " << endl;
        return;
    }
    if(head==tail && head->next==tail){
        tail=NULL;
        
    }
    else if(head->next==tail){
        tail=head;
    }
    node *temp = head->next;
    head->next = temp->next;
    delete temp;
}
int main()
{
    node *tail = NULL;
    insetathead(tail, 5);
    insertatarget(tail, 7, 5);
    insertattail(tail, 44);
    print(tail);
    insertatarget(tail, 33, 5);
    print(tail);
    deletenode(tail, 5);
    print(tail);
    deletenode(tail,45);
    deletenode(tail,44);
    print(tail);
    deletenode(tail,7);
    print(tail);
    deletenode(tail,33);
    print(tail);


    return 0;
}