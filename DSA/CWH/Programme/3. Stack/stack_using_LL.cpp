// In stack using linkes list pusing and poping will done at head because it takes O(1) time complexicity
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

bool isempty(node *top)
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

node *push(node *top, int value)
{
    if (isfull())
    {
        cout << "stack overflow" << endl;
        return top;
    }
    node *ptr = new node;
    ptr->next = top;
    ptr->data = value;
    return ptr; //here top will be updated so we have to return top
}

int pop(node *&top)  //reference to pointer varaiable
{                    //if we did'nt want to use reference variable make top as global 
    if (isempty(top))
    {
        cout << "stack underflow" << endl;
        return -1;
    }
    node *ptr = top;
    top = top->next;
    int n = ptr->data;
    free(ptr);
    return n;
}

void traverse(node *top)
{
    if (isempty(top))
    {
        cout << "stack is empty" << endl;
        return;
    }

    while (top != NULL)
    {
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}
int main()
{
    node *top = NULL; //stack top initially pointing to the null

    pop(top);
    traverse(top);

    top = push(top, 3);
    traverse(top);

    top = push(top, 5);
    top = push(top, 6);
    top = push(top, 9);
    top = push(top, 1);
    top = push(top, 3);
    traverse(top);
    
    pop(top);
    traverse(top);

    return 0;
}