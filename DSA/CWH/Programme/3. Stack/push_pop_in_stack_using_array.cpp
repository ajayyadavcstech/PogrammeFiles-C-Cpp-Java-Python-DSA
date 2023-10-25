#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr = new int[size];
};

bool is__empty(stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

bool is_full(stack *s)
{
    if (s->top == s->size - 1)
    {
        return true;
    }
    return false;
}

void push(stack *s, int value)
{
    if (is_full(s))
    {
        cout << "stack overflow" << endl;
        return;
    }
    s->arr[++s->top] = value;
}

int pop(stack *s)
{
    if (is__empty(s))
    {
        cout << "stack is underflow" << endl;
        return -1;
    }
    return s->arr[s->top--];
}

void traverse(stack *s)
{
    if (is__empty(s))
    {
        cout << "stack is empty" << endl;
        return;
    }

    for (int i = 0; i <= s->top; i++)
    {
        cout << s->arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    stack *s = new stack;
    s->size = 10;
    s->top = -1;

    push(s, 4); //pushed to the back
    traverse(s);

    pop(s); //here 4 will be popped  //poped from back
    traverse(s);

    pop(s); //stack is underflow

    push(s, 6);
    push(s, 2);
    push(s, 7);
    push(s, 9);
    push(s, 5);
    traverse(s);

    push(s, 11);
    push(s, 23);
    push(s, 45);
    push(s, 66);
    push(s, 75);
    traverse(s);

    push(s, 44); //stack overflow

    return 0;
}