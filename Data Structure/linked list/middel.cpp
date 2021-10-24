#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
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

int middel(struct node *p)
{
    int mid = length(p) / 2;
    for (int i = 0; i < mid; i++)
    {
        p = p->next;
    }
    return p->data;
}

// best way to find middel by only one time travers
int mid()
{
    struct node *p, *q;
    p = q = first;
    while (q)
    {
        q = q->next;
        if (q)
        {
            q = q->next;
            p = p->next;
        }
    }
    return p->data;
}
int main()
{
    int a[] = {12, 3, 4, 5, 6};
    create(a, 5);
    cout << middel(first);
    cout << endl
         << mid();
}