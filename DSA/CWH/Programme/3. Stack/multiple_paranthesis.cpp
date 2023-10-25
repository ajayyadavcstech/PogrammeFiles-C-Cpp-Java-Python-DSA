#include <iostream>
using namespace std;

struct stack
{
    int size = 30;
    int top = -1;
    char *arr = new char[size];
};

bool matching(char a,char b) //cheking is top open parathesis matching with a given opposite closed parathesis or not 
{
    if (a=='{' && b=='}')
    {
        return true;
    }
     if (a=='[' && b==']')
    {
        return true;
    }
     if (a=='(' && b==')')
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
        cout << "stack is overflow" << endl;
        return;
    }
    s->arr[++s->top] = value;
}

void pop(stack *s)
{
    if (isempty(s))
    {
        cout << "stack underflow" << endl;
        return;
    }
    s->top--;
}

void multiple_parathesised(char *a)
{
    stack *s = new stack;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '(' || a[i] == '{' || a[i] == '[')
        {
            push(s, a[i]);
        }
        else if (a[i] == ')' || a[i] == '}' || a[i] == ']')
        {
            if (isempty(s) || !matching(s->arr[s->top],a[i]))  //we will pop if parathesis matched else return....
            {
                cout << "parathesis mismatched" << endl;
                return;
            }
            pop(s);
        }
    }
    if (s->top != -1)
    {
        cout << "parathesis mismatched" << endl;
    }
    else
        cout << "parathesis matched" << endl;
}
int main()
{
    char *a = new char[30]; 
    cout << "Enter multiple parathesised equation" << endl;
    cin >> a;
    multiple_parathesised(a);

    return 0;
}