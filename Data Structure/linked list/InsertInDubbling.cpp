#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *first = NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->prev = last;
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int length(struct node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void insert(struct node *p, int index, int x)
{
    struct node *t;
    if (index < 0 || index > length(p))
        return;

    if (index == 0)
    {
        t = new node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new node;
        t->prev = p;
        t->next = p->next;
        t->data = x;

        if (p->next)
        {
            p->next->prev = t;
        }
        p->next = t;
    }
}

int del(struct node *p, int index)
{
    int x = -1;
    if (index < 0 || index > length(p))
    {
        return -1;
    }
    if (index == 1)
    {
        first = first->next;
        if (first)
            first->prev = NULL;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        x = p->data;
        delete p;
    }
    return x;
}

void Reverse(struct node *p)
{
    struct node *temp;

    while (p!=NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if (p && p->next == NULL)
    {
        first = p;
    }
    }
    
}
int main()
{
    int a[] = {12, 3, 4, 5};
    create(a, 4);
    // insert(first, 2, 10);
    // del(first, 2);
    // display(first);
    Reverse(first);
    display(first);
}