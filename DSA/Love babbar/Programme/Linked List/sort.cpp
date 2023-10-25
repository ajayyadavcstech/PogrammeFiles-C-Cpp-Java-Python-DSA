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
node* sortList(node *head)
{
    // Write your code here.
    node* zerohead=new node(0);
    node*zerotail=zerohead;
    zerohead->next=NULL;
    node* onehead=new node(0);
    onehead->next=NULL;
    node*onetail=onehead;
    node* twohead=new node(0);
    twohead->next=NULL;
    node* twotail=twohead;
    
    node * pt=head;
    while(pt!=NULL){
        node* pt1=pt;
        pt=pt->next;
        pt1->next=NULL;
        if(pt1->data==0){
            zerotail->next=pt1;
            zerotail=zerotail->next;
        }
        else if(pt1->data==1){
            onetail->next=pt1;
            onetail=onetail->next;
        }
        else
        {
            twotail->next=pt1;
            twotail=twotail->next; 
        }
    }
    if(onehead==onetail){
        zerotail->next=twohead->next;
        return zerohead->next;
    }
    zerotail->next=onehead->next;
    onetail->next=twohead->next;
    return zerohead->next;

}


int main()
{
    node *head = new node(0);
    print(head);
    head = sortList(head);
    print(head);

    return 0;
}