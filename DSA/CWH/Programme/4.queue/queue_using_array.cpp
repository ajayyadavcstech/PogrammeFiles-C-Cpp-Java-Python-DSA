#include <iostream>
using namespace std;

struct queue
{
    int size = 30;  //max size of a queue
    int f = -1;     //starting of a queue
    int e = -1;     //ending of a queue
    int *arr = new int[size];   //initialising array of size 30
};

bool isempty(queue *q)  //cheking for empty queue
{
    if (q->f == q->e)
    {
        return true;
    }
    return false;
}

bool isfull(queue *q) //chaeking for full of queue
{
    if (q->e == q->size - 1)
    {
        return true;
    }
    return false;
}

void enque(queue *q, int value)   // inderting element at end of queue
{
    if (isfull(q))
    {
        cout << "queue is ovweflow" << endl;
        return;
    }
    q->arr[++q->e] = value;
}

int deque(queue *q)          //removing element from starting of queue
{
    if (isempty(q))
    {
        cout << "queue is underflow" << endl;
        return -1;
    }
    return q->arr[++q->f];
}

void traversal(queue *q)    //printing all element
{
    if (isempty(q))
    {
        cout << "queue is empty" << endl;
        return;
    }
    for (int i = q->f + 1; i <= q->e; i++)
    {
        cout << q->arr[i] << " ";
    }
    cout << endl;
}
 
int peek(queue *q, int index)   //printig any given index of a queue
{
    if ((q->f + 1 + index) > (q->size - 1))
    {
        cout << "invalid input" << endl;
        return -1;
    }
    return q->arr[q->f + 1 + index];
}

int main()
{
    queue *q = new queue;   //initialize queue in heap
    deque(q);
    traversal(q);

    enque(q, 3);
    traversal(q);

    enque(q, 5);
    enque(q, 1);
    enque(q, 8);
    enque(q, 9);
    traversal(q);

    deque(q);
    traversal(q);

    deque(q);
    deque(q);
    deque(q);
    deque(q);
    traversal(q);

    enque(q,3);
    enque(q,6);
    enque(q,8);
    enque(q,9);
    enque(q,2);
    enque(q,4);
    enque(q,1);
    enque(q,21);
    enque(q,12);
    traversal(q);

   cout<< peek(q,3)<<endl;

   deque(q);
   deque(q);
   deque(q);
   traversal(q);

   cout<<peek(q,2);

    return 0;
}

// Drawback of linear queue
// 1-> if we deque many times then extra space is lefted int queue 
// 2-> In case free space we are not able to fil it 


//Reslve using
//1->when starting (f) becomes equal to ending (e) then we initialize f==e==-1 again so our queue starts again (it works when both becomes same)
//2->circular queue is best resolving technique when here we use i=(i+1) % size this increament condition makes queue circular