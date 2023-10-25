//In this type of queue we are allowed to insert and delete the element from both side
//enqueuef
//enqueueE or enqueueR
//dequeuef
//dequeueE or dequeueR

#include <iostream>
using namespace std;

struct queue
{
    int size = 5;
    int f = -1;
    int e = -1;
    int *arr = new int[size];
};

bool isempty(queue *q)
{
    if (q->f == q->e)
    {
        return true;
    }
    return false;
}
bool isfull(queue *q)
{
    if (q->e == q->size - 1)
    {
        return true;
    }
    return false;
}
void enqueuef(queue *q, int value)
{
    if (q->f ==  q->e) //we are using this condition because if queue is at at start point means 
    {
        q->arr[q->f + 1] = value;
        q->e++;
        return;
    }

    if (q->f == -1)
    {
        cout << "queue is full from front" << endl;
        return;
    }
    q->arr[q->f--] = value;
}
void enqueueE(queue *q, int value)
{
    if (isfull(q))
    {
        cout << "queue is full from end" << endl;
        return;
    }
    q->arr[++q->e] = value;
}

int dequeuef(queue *q)
{
    if (isempty(q))
    {
        cout << "queue is empty" << endl;
        return -1;
    }
    return q->arr[++q->f];
}
int dequeueE(queue *q)
{
    if (isempty(q))
    {
        cout << "queue is empty" << endl;
        return -1;
    }
    return q->arr[q->e--];
}

void traverse(queue *q)
{
    if (isempty(q))
    {
        cout << "queue is empty cannot be traverse" << endl;
        return;
    }
    for (int i = q->f + 1; i <= q->e; i++)
    {
        cout << q->arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    queue *q = new queue;
    traverse(q);

    enqueuef(q, 4);
    traverse(q);

    enqueuef(q, 1);

    enqueueE(q, 2);
    enqueueE(q, 3);
    enqueueE(q, 4);
    enqueueE(q, 5);
    enqueueE(q, 6);
    traverse(q);

    dequeuef(q);
    traverse(q);
    dequeueE(q);
    traverse(q);

    enqueuef(q, 9);
    traverse(q);

    enqueuef(q, 0);

    dequeuef(q);
    dequeuef(q);
    traverse(q);

    dequeueE(q);
    traverse(q);

    dequeueE(q);
    traverse(q);

    dequeueE(q);

    enqueueE(q, 4);
    traverse(q);

    enqueueE(q, 5);
    enqueueE(q, 6);
    traverse(q);

    enqueueE(q, 7);
    enqueuef(q, 0);

    traverse(q);

    enqueuef(q, 11);
    traverse(q);

    enqueuef(q, 6);
    traverse(q);

    return 0;
}