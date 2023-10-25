#include<iostream>
#include<cstring>
using namespace std;

struct stack
{
    int size=30;
    int top=-1;
    char *arr=new char [size];
};

bool isoperend(char a)
{
    if (a!='*' && a!='+' && a!='-' && a!='/')
    {
        return true;
    }
    return false;
    
}
bool isempty(stack *s)
{
    if (s->top==-1)
    {
        return true;
    }
    return false;
    
}

int priority(char a)
{
    if (a=='*' || a=='/')
    {
        return 2;
    }
    else if (a=='+' || a=='-')
    {
        return 1;
    }
    return 0;
    
    
}

void push(stack *s,char a)
{
    s->arr[++s->top]=a;
}
char pop(stack *s)
{
   return s->arr[s->top--];
}

char* infix_to_prefix(char* infix)
{
    char *postfix=new char[strlen(infix)-1];
    stack * s=new stack;
    int i=0;
    int j=0;
    while (infix[i]!='\0')
    {
        if (isoperend(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else if (priority(infix[i])>priority(s->arr[s->top]))
        {
            push(s,infix[i++]);
        }
        else
        {
            postfix[j++]=pop(s);
        }
        
        
    }
    while (!isempty(s))
    {
        postfix[j++]=pop(s);
    }
    postfix[j]='\0';
    return postfix;
    
    
}

int main()
{
    char* infix=new char [30];
    cout<<"Enter infix expression"<<endl;
    cin>>infix;
    cout<<infix_to_prefix(infix);
    
    return 0;
}