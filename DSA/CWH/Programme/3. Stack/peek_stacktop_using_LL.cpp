#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *top = nullptr; //here top is global

bool isempty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}

bool isfull()
{
    node *n = new node;
    if (n == NULL)
    {
        return true;
    }
    return false;
}

void push(int value)
{
    if (isfull())
    {
        cout << "stack overflow" << endl;
        return;
    }
    node *ptr = new node;
    ptr->data = value;
    ptr->next = top;
    top = ptr;
}

int pop()
{
    if (isempty())
    {
        cout << "stack underflow" << endl;
        return -1;
    }
    node *p = top;
    top = top->next;
    int n = p->data;
    free(p);
    return n;
}

void traverse()
{
    if (isempty())
    {
        cout << "stack is empty" << endl;
    }
    node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int peek(int index)
{
    node *p = top;
    if (index == 0)
    {
        return p->data;
    }

    for (int i = 1; i <= index; i++)
    {
        if (p->next == NULL)
        {
            cout << "invalid index" << endl;
            return -1;
        }
        p = p->next;
    }
    return p->data;
}

int topvalue()
{
    return top->data;
}

int main()
{
    push(3);
    traverse();

    push(4);
    push(1);
    push(2);
    push(8);
    push(9);
    traverse();

    pop();
    traverse();

    pop();
    pop();
    traverse();

    push(8);
    push(12);
    push(11);
    push(13);
    traverse();

    cout << peek(3) << endl;
    cout << peek(0) << endl;
    cout << peek(1) << endl;
    cout << peek(6) << endl;
    cout << peek(7) << endl;

    cout << topvalue();

    return 0;
}