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
    ~node(){
        cout<<"calling destructor "<<data<<endl;
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
void deletepos(node *&head, int pos)
{
    node *pt = head;
    if (pos == 1)
    {
        head = head->next;
        delete pt;
        return;
    }
    int i = 1;
    while (i < pos - 1)
    {
        pt = pt->next;
        i++;
    }
    node *cur = pt->next;
    pt->next = cur->next;
    delete cur;
}
int middle(node* head){
    int cnt=0;
    node* pt=head;
    while(pt!=NULL){
        cnt++;
        pt=pt->next;
    }
    pt=head;
    int mid=cnt/2+1;
    int i=1;
    while(i<mid){
        pt=pt->next;
        i++;
    }
    return pt->data;

}

int main()
{
    node *head = new node(10);
    node *tail = head;
    inserattail(tail, 45);
    inserattail(tail, 44);
    inseratpos(head, 2, 55);
    inseratpos(head, 1, 5);
    inseratpos(head, 1, 52);
    print(head);
    cout<<middle(head);

    return 0;
}