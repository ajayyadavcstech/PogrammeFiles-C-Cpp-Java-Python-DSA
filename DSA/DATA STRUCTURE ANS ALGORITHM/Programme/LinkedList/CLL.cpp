#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()
    {
        cout << "Deleting Node " << data << endl;
    }
};
class CLL
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void InsertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (head == NULL)
        {
            head = temp;
            tail = head;
            head->next = head;
        }
        else
        {
            temp->next = head;
            head = temp;
            tail->next = head;
        }
    }
    void InserAttail(int val)
    {
        Node *temp = new Node(val);
        if (head == NULL)
        {
            head = temp;
            tail = head;
            head->next = head;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
    }
    void print()
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void deletpos(int pos)
    {
        Node *temp = head;
        int i = 1;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        if (pos == 1)
        {
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
            }
            else
            {
                tail->next = head;
            }
            delete temp;
        }
        else if (temp->next == tail)
        {
            temp->next = head;
            delete tail;
            tail = temp;
        }
        else
        {
            Node *node = temp->next;
            temp->next = temp->next->next;
            delete node;
        }
    }
};

int main()
{
    CLL l;
    l.InserAttail(9);
    l.print();
    l.InsertAtHead(0);
    l.print();
    l.InserAttail(2);
    l.print();
    l.InsertAtHead(1);
    l.print();
    l.deletpos(3);
    l.print();

    return 0;
}