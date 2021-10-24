#include <iostream>
using namespace std;

class stacknode
{
public:
    int data;
    stacknode *next;
};

class Stack
{
public:
    stacknode *top;
    Stack()
    {
        top = NULL;
    }
    void push(int x);
    int pop();
    bool isEmpty();
    int topp();

    stacknode *newnode(int x);
};

stacknode *Stack::newnode(int x)
{
    stacknode *t = new stacknode;
    t->data = x;
    t->next = NULL;
    return t;
}

void Stack::push(int x)
{
    stacknode *t = newnode(x);
    if (t == NULL)
    {
        cout << "stack overflow";
    }
    else
    {
        t->next = top;
        top = t;
    }
}
bool Stack::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Stack::pop()
{
    if (isEmpty())
    {
        cout << "empty stack";
        return -1;
    }
    else
    {
        stacknode *t = top;
        top = top->next;
        int poped = t->data;
        delete t;
        return poped;
    }
}
int Stack::topp()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        return top->data;
    }
}

int main()
{
    Stack st;
    st.push(3);
    st.push(49);
    st.push(23);
    st.pop();
    cout<<st.topp();
}