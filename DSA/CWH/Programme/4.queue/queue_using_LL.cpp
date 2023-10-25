#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
struct queue
{
    node *f = nullptr;
    node *e = nullptr;
};
bool isempty(queue *q)
{
    if (q->f == nullptr)
    {
        return true;
    }
    return false;
}
bool isfull()
{
    node *p = new node;
    if (p == nullptr)
    {
        return true;
    }
    return false;
}

void enqueue(queue *q, int value)
{
    if (isfull())
    {
        cout << "queue is overflow";
        return;
    }
    node *p = new node;
    p->data = value;
    p->next = nullptr;

    if (q->f == nullptr)
    {
        q->f = q->e = p;
        return;
    }
    q->e->next = p;
    q->e = p;
}

int dequeue(queue *q)
{
    if (isempty(q))
    {
        cout << "queue is underflow" << endl;
        return -1;
    }
    node *p = q->f;
    int value = p->data;
    if (q->f == q->e)
    {
        q->f = q->e = nullptr;
        free(p);
        return value;
    }
    q->f = q->f->next;
    free(p);
    return value;
}
void traversal(queue *q)
{
    if (isempty(q))
    {
        cout << "queue is empty" << endl;
        return;
    }
    node *p = q->f;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void creating_node(queue *q, int n)
{

    if (n <= 0)
    {
        cout << "invlaid input" << endl;
        return;
    }
    cout << "Enter " << n << " node value" << endl;
    if (isempty(q))
    {
        node *p = new node;
        cin >> p->data;
        q->f = q->e = p;
        p->next = NULL;
    }
    for (int i = 1; i < n; i++)
    {
        node *p = new node;
        cin >> p->data;
        q->e->next = p;
        q->e = p;
        p->next = NULL;
    }
}

int main()
{
    queue *q = new queue;
    creating_node(q, 5);
    traversal(q);

    enqueue(q, 12);
    traversal(q);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    traversal(q);

    dequeue(q);
    traversal(q);

    dequeue(q);
    enqueue(q, 11);
    enqueue(q, 12);
    enqueue(q, 1);
    enqueue(q, 3);
    traversal(q);

    return 0;
}