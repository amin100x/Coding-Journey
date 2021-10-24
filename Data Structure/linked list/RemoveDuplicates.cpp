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

void dispaly(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void removeDuplicte(struct node *p)
{
    struct node *q = p->next;
    while (q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{
    int a[] = {2, 2, 4, 5, 6, 7, 7, 7, 8};
    create(a, 9);
    removeDuplicte(first);
    dispaly(first);
}