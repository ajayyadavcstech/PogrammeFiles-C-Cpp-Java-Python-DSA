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

int peek(stack *s,int index)  //peek means index starting from top of the stack or accesing index from top of the stack
{
    if (s->top-index<0)      //here index is from top of the stack
    {
        cout<<"Invalid input"<<endl;
        return -1;
    }
    return s->arr[s->top-index];
    
}


int main()
{
    stack *s=new stack;
    s->size=10;
    s->top=-1;

    push(s,4);
    traversal(s);

    pop(s);
    traversal(s);

    pop(s);
    traversal(s);

    push(s,5);
    push(s,1);
    push(s,7);
    push(s,9);
    push(s,11);
    traversal(s);

    push(s,22);
    push(s,33);
    push(s,12);
    push(s,23);
    push(s,45);
    traversal(s);

    push(s,45);
    traversal(s);

    pop(s);
    pop(s);
    pop(s);
    traversal(s);

  cout<<  peek(s,4)<<endl;
  cout<<  peek(s,6)<<endl;
  cout<<  peek(s,7)<<endl;


    return 0;
}