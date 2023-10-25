#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top = -1;
    char *arr = new char[size];
};

bool isempty(stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

bool isfull(stack *s)
{
    if (s->top == s->size - 1)
    {
        return true;
    }
    return false;
}

void push(stack *s, char value)
{
    if (isfull(s))
    {
        cout << "stack is overfolw " << endl;
        return;
    }
    s->arr[++s->top] = value;
}

void pop(stack *s)
{
    if (isempty(s))
    {
        cout << "stack is underflow" << endl;
    }
    s->top--;
}

void paranthesis_matching(char *a)
{
    stack *s = new stack;
    s->size = 20;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '(')
        {
            push(s, a[i]);
        }
        if (a[i] == ')')
        {
            if (isempty(s))
            {
                cout << "parathesis mismatched" << endl;
                return;
            }
            pop(s);
        }
    }
    if (isempty(s))
    {
        cout << "paranthesis matched" << endl;
    }
    else
        cout << "parathesis mismatched" << endl;
}

int main()
{

    char *a = new char[30];
    cout << "Enter parathesised char array" << endl;
    cin >> a;

    paranthesis_matching(a);

    return 0;
}