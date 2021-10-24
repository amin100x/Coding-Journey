#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first;

void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = first;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void dislay(struct node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != first);
}

int length(struct node *p)
{
    int l = 0;
    do
    {
        l++;
        p = p->next;
    } while (p != first);
    return l;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    int l = length(first);

    if (index < 0 || index > length(p)) //check for valid index
    {
        return;
    }

    if (index == 0)
    {
        t = new node;
        t->data = x;
        if (first == NULL)
        {
            first = t;
            first->next = first;
        }

        else
        {
            for (int i = 0; i < l - 1; i++) // or while(p->next!=first) { p=p->next}
            {
                p = p->next;
            }
            p->next = t;
            t->next = first;
            first = t;
        }
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int del(struct node *p, int index)
{
    struct node *q;
    int x;
    if (index < 0 || index > length(p))
    {
        return -1;
    }

    if (index == 1)
    {
        while (p->next != first)
        {
            p = p->next;
        }
        x = first->data;

        if (first == p)
        {
            delete first;
            first = NULL;
        }
        else
        {
            p->next = first->next;
            delete first;
            first = p->next;
        }
    }
    else
    {
        for(int i=0; i<index-2 ;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next= q->next;
        x=q->data;
        delete q;
    }
    return x;
}

int main()
{
    int a[] = {12, 34, 5};
    create(a, 3);
    insert(first, 2, 10);
    dislay(first);
    cout<<endl<< del(first, 3)<<endl;
    dislay(first);
}