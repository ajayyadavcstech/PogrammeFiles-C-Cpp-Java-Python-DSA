//here we are creatin stack in heap and a two function to check the stack is 1-> empty or not and  2-> full or not

//stack is a collection of element following LIFO(Last in first out). Item can be inserted or removed from one end (push or pop)
#include <iostream>
using namespace std;
struct stack //stack using array
{
    int size;                 //maximum size of an array
    int top;                  //top filled index of an element
    int *arr = new int[size]; //creating the max size array
};

bool stack_is_full(stack *ptr) //condition to check full stack
{
    if ((ptr->size - 1) == ptr->top)
    {
        return true;
    }
    return false;
}

bool stack_is_empty(stack *ptr) // condition to check empety stack
{
    if (ptr->top == -1)
    {
        return true;
    }
    return false;
}
int main()
{
    // stack s;
    // s.size=80;
    // s.top=-1;

    // instead of creating stack in stack memory we create memory in heap and pointer in stack that point to the heap stack location

    stack *s = new stack; //creating memory in heap
    s->size = 4;
    s->top = -1;

    s->arr[0] = 3; //we are manyally filling the stack at 0th index
    s->top++;

    s->arr[1] = 7; //we are manyally filling the stack at 1st index
    s->top++;

    s->arr[2] = 9; //we are manyally filling the stack at 2nh index
    s->top++;

    s->arr[3] = 11; //we are manyally filling the stack at 3th index
    s->top++;

    if (stack_is_empty(s)) //chek is stack is empty or not
    {
        cout << "stack is empty" << endl;
    }
    else
        cout << "stack is not empty" << endl;

    if (stack_is_full(s)) //chek is stack is full or not
    {
        cout << "stack is full" << endl;
    }
    else
        cout << "stack is not full" << endl;

    return 0;
}