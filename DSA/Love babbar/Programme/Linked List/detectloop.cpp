#include <iostream>
using namespace std;
#include <map>
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
bool loophole(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    node *pt = head;
    map<node *, bool> visited;
    while (pt != NULL && visited[pt] != true)
    {
        visited[pt] = true;
        pt = pt->next;
    }
    if (pt == NULL)
    {
        return false;
    }
    return true;
}
bool floydsalgo(node *head)
{
    if (head == NULL)
        return false;

    node *slow = head;
    node *fast = head;
    do{
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
        slow = slow->next;
    }while (fast != slow && fast != NULL && fast->next != NULL);
    

    if (fast == NULL || fast->next == NULL)
    {
        return false;
    }
    return true;
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
    print(head);
    tail->next=head;
    cout << floydsalgo(head)<<endl;
    cout<<tail->data<<endl;

    return 0;
}