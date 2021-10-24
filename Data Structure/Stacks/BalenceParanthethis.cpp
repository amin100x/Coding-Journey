#include <iostream>
using namespace std;

class node
{
public:
    char data;
    node *next;
};
class stack
{
public:
    node *top;
    stack()
    {
        top = NULL;
    }
    void push(char x)
    {
        node *t = new node;
        if (t == NULL)
        {
            cout << "stack over flow";
        }
        else
        {
            t->next = top;
            top = t;
        }
    }
    char pop()
    {
        if (top == NULL)
        {
            cout << "empty";
            return -1;
        }
        else
        {
            node *t = top;
            top = top->next;
            int x = t->data;
            delete t;
            return x;
        }
    }
    int isbalenced(char *s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '(')
            {
                push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (top == NULL)
                {
                    return 0;
                }
                pop();
            }
        }
        if (top == NULL)
        {
            return 1;
        }
        else
            return 0;
    }
};
int main()
{
    stack st;
    char *s = "(a+b)+(x+v))";
    cout << st.isbalenced(s);
}