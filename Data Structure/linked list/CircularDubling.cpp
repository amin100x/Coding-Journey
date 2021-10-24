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
    first->next = first;
    first->prev = last;
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
    if (index < 0 || index > length(p))
    {
        return;
    }
    struct node *t, *last;
    last = first->prev;
    if (index == 0)
    {
        t = new node;
        t->data = x;
        if (first == NULL)
        {
            first = t;
            first->next = first;
            first->prev = first;
        }
        else
        {

            last->next = t;
            t->prev = last;
            t->next = first;
            first->prev = t;
            first = t;
        }
    }
    else
    {

    }
}
void display(struct node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != first);
}

int main()
{
    int a[] = {12, 34, 5, 6, 7, 45, 7, 12};
     create(a, 8);
    insert(first, 0, 10);
    display(first);
}