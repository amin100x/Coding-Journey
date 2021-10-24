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

int isloop(struct node *f)
{
    struct node *p, *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;
        if (q)
        {
            q = q->next;
        }

    } while (p && q && p != q);

    if (p == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[] = {2, 34, 45, 677, 7};
    create(a, 5);

    struct node *t1, *t2;
    t1 = first->next;
    t2 = first->next->next->next->next;
    t2->next = t1; //for making loop

    cout << isloop(first);
}