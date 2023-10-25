#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertathead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void inserattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void inseratpos(Node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }
    Node *pt = head;
    Node *temp = new Node(data);
    int i = 1;
    for (1; i < pos - 1; i++)
    {
        pt = pt->next;
    }
    temp->next = pt->next;
    pt->next = temp;
}
Node *reverse(Node *head)
{
    Node *pre = NULL;
    Node *cur = head;
    Node *forw = head;
    while (cur != NULL)
    {
        forw = forw->next;
        cur->next = pre;
        pre = cur;
        cur = forw;
    }
    return pre;
}

Node *addFirstAndSecondHalf(Node *head)
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
        return head;
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"slow data "<<slow->data<<endl;

    Node *first = head;
    Node *second = slow->next;
    slow->next = NULL;

    first = reverse(first);
    second = reverse(second);

    cout<< " first ";
    print(first);

    cout<<"second   ";
    print(second);

    Node *pt1 = first;
    Node *pre = NULL;
    Node *pt2 = second;
    int carry = 0;

    while (pt2 != NULL)
    {
        int sum = pt1->data + pt2->data + carry;
        carry = sum / 10;
        pt1->data = sum % 10;
        pre = pt1;
        pt1 = pt1->next;
        pt2 = pt2->next;
    }
    if (pt1 != NULL)
    {
        int sum = pt1->data + carry;
        carry = sum / 10;
        pt1->data = sum % 10;
        pre = pt1;
    }
    if (carry != 0)
    {
        Node *temp = new Node(carry);
        pre->next = temp;
    }
    first = reverse(first);
    return first;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    inserattail(tail, 5);
    inserattail(tail, 4);
    inserattail(tail, 5);
    inserattail(tail, 3);
    inserattail(tail, 3);
    inserattail(tail, 5);
    print(head);
    head = addFirstAndSecondHalf(head);
    cout<<"sum    ";
    print(head);

    return 0;
}