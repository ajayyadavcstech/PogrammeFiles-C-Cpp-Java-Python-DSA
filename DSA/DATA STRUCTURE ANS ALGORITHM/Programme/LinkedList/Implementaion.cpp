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
        cout << "memory free for " << data << endl;
    }
};
class Linkedlist
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int n = 0;
    void InsertAthead(int val)
    {
        n++;
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        if (tail == NULL)
            tail = head;
    }
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
    void InserAttail(int val)
    {
        n++;
        Node *temp = new Node(val);
        if (tail == NULL)
        {
            tail = temp;
            head = temp;
            return;
        }
        tail->next = temp;
        tail = tail->next;
    }
    int front()
    {
        if (head)
            return head->data;
        cout << "List is empty  " << endl;
        return -1;
    }
    int back()
    {
        if (tail)
            return tail->data;
        cout << "List is empty  " << endl;
        return -1;
    }
    void erase(int k)
    {
        if (k == 1 && head)
        {

            Node *temp = head;
            delete temp;
            head = head->next;
            return;
        }
        else if (!head)
        {
            cout << "Index out of bound" << endl;
            return;
        }
        int i = 1;
        Node *temp = head;
        Node *pre = NULL;
        while (i < k)
        {
            if (temp == NULL)
            {
                cout << "Index out of bound" << endl;
            }

            pre = temp;
            temp = temp->next;
            i++;
        }
        pre->next = temp->next;
        if (temp == tail)
        {
            tail = pre;
        }
        delete temp;
        n--;
    }
    void InserAtmid(int val, int k)
    {
        int i = 1;
        Node *temp = head;
        Node *pre = NULL;
        while (i < k)
        {
            pre = temp;
            temp = temp->next;
            i++;
        }
        Node *node = new Node(val);
        if (temp == head)
        {
            node->next = head;
            head = node;
        }
        else if (temp == tail)
        {
            tail->next = node;
            tail = node;
        }
        else
        {
            pre->next = node;
            node->next = temp;
        }
        n++;
    }
    void freememory(Node *head)
    {
        if (head == NULL)
            return;
        freememory(head->next);
        delete head;
    }
    Node *revHelp(Node *temp, Node *&pre)
    {
        if (!temp)
        {
            return NULL;
        }
        Node *node = temp;
        head = revHelp(temp->next, pre);
        if (!head)
        {
            head = node;
            pre = node;
            node->next = NULL;
        }
        else
        {
            pre->next = node;
            node->next = NULL;
            pre = node;
        }
        return head;
    }
    void reverse()
    {
        Node *pre = NULL;
        head = revHelp(head, pre);
    }
    ~Linkedlist()
    {
        freememory(head);
    }
};
int main()
{
    Linkedlist l;
    l.print();
    l.InserAttail(9);
    l.print();
    l.InserAttail(10);
    l.print();
    l.InsertAthead(0);
    l.print();
    cout << l.front() << endl;
    cout << l.back() << endl;
    l.InserAttail(2);
    l.InserAttail(8);
    l.print();

    l.erase(3);
    l.print();
    l.erase(4);
    l.print();
    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << l.n << endl;
    l.InserAtmid(11, 2);
    l.print();
    l.reverse();
    l.print();

    return 0;
}