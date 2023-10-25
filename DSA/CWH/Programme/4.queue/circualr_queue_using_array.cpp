#include <iostream>
using namespace std;

struct queue
{
    int f = 0; //
    int e = 0;
    int size = 5; //queue only conatain size-1 element because one spacr reserve for starting queue
    int *arr = new int[size];
};

bool isfull(queue *q)
{
    if ((q->e + 1) % (q->size) == q->f) //In circualar starting point is always empty so we easily use this condition
    {
        return true;
    }
    return false;
}

bool isempty(queue *q)
{
    if ((q->f) == (q->e))
    {
        return true;
    }
    return false;
}

void enqueue(queue *q, int value)
{
    if (isfull(q))
    {
        cout << "queue overflow" << endl;
        return;
    }
    q->e = (q->e + 1) % q->size; //using circular increament condtion
    q->arr[q->e] = value;
}

int dequeu(queue *q)
{
    if (isempty(q))
    {
        cout << "queue underflow" << endl;
        return -1;
    }
    q->f = (++q->f) % (q->size); //using circular increament condtion
    return q->arr[q->f];
}

int peek(queue *q, int index)
{
    if (((q->f + 1 + index) % (q->size)) > (q->e))
    {
        cout << "invalid index" << endl;
        return -1;
    }
    return q->arr[(q->f + 1 + index) % q->size];
}

void travesal(queue *q)
{
    if (isempty(q))
    {
        cout << "queue is empty" << endl;
        return;
    }
    for (int i = (q->f + 1) % (q->size); i <= q->e; i++) //here we are not using circualr condition in i++ because if we use then i only rotate between the size and never meet terminating condtion
    {
        cout << q->arr[(i % (q->size))] << " ";
    }
    cout << endl;
}

int main()
{
    queue *q = new queue;
    travesal(q);
    dequeu(q);

    enqueue(q, 4);
    travesal(q);

    enqueue(q, 5);
    enqueue(q, 3);
    travesal(q);

    enqueue(q, 2);
    travesal(q);
    enqueue(q, 6);

    dequeu(q);
    travesal(q);

    dequeu(q);
    dequeu(q);
    dequeu(q);
    travesal(q);

    dequeu(q);

    enqueue(q, 1);
    enqueue(q, 4);
    enqueue(q, 6);
    enqueue(q, 8);

    travesal(q);
    cout << peek(q, 2);

    return 0;
}