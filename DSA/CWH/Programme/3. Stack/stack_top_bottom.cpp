#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr = new int[size];
};

bool isfull(stack *s)
{
    if (s->top == s->size - 1)
    {
        return true;
    }
    return false;
}

bool isempty(stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

void push(stack *s, int value)
{
    if (isfull(s))
    {
        cout << "stack overflow" << endl;
        return;
    }
    s->arr[++s->top] = value;
}

void traversal(stack *s)
{
    if (isempty(s))
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

int pop(stack *s)
{
    if (isempty(s))
    {
        cout << "stack underflow" << endl;
        return -1;
    }
    return s->arr[s->top--];
}

int stack_top(stack *s)
{
    return s->arr[s->top];
}
int stack_bottom(stack *s)
{
    return s->arr[0];
}
int main()
{
    stack *s = new stack;
    s->size = 10;
    s->top = -1;

    push(s,4);
    push(s,11);
    push(s,6);
    push(s,8);
    push(s,13);
    push(s,16);
    push(s,18);
    traversal(s);

    cout<<"top of stack is "<<stack_top(s)<<endl;
    cout<<"bottom of stack is "<<stack_bottom(s)<<endl;

    return 0;
}