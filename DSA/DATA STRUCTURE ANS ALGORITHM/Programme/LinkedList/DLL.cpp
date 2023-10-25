#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;
    Node(int val)
    {
        data = val;
        next = NULL;
        pre = NULL;
    }
    ~Node()
    {
        cout << "Deleting Element : " << data << endl;
    }
};
class DLL
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void print()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int getLen()
    {
        Node *temp = head;
        int i = 0;
        while (temp)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
    void InsertAtHead(int val)
    {
        Node *node = new Node(val);
        if (head == NULL)
        {
            head = node;
            tail = node;
            return;
        }
        node->next = head;
        head->pre = node;
        head = node;
    }
    void InsertAttail(int val)
    {
        Node *node = new Node(val);
        if (tail == NULL)
        {
            head = node;
            tail = node;
            return;
        }
        tail->next = node;
        node->pre = tail;
        tail = tail->next;
    }
    void InsertAtPos(int val, int pos)
    {
        Node *node = new Node(val);
        Node *temp = head;
        int i = 1;
        while (i < pos)
        {
            i++;
            temp = temp->next;
        }
        if (temp == head)
        {
            InsertAtHead(val);
        }
        else if (temp == tail)
        {
            InsertAttail(val);
        }
        else
        {
            Node *t = temp;
            temp->pre->next = temp->next;
            temp = temp->pre;
            temp->next->pre = temp;
            delete t;
        }
    }
    void revhelp(Node *temp)
    {
        if (temp == NULL)
            return;
        revhelp(temp->next);
        cout << temp->data << " ";
    }
    void printrev()
    {
        // revhelp(head);
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->pre;
        }
        cout << endl;
    }
};
int main()
{
    DLL d;
    cout << d.getLen() << endl;
    d.InsertAtHead(2);
    d.print();
    cout << d.getLen() << endl;
    d.InsertAttail(8);
    d.print();
    d.InsertAtPos(9, 1);
    d.print();
    d.printrev();

    return 0;
}