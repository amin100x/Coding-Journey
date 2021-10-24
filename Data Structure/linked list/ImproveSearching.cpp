// move to front node Method

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
    struct node *last, *t;
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

struct node *search(struct node *p, int key)
{
    struct node *q;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
void Display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    int a[]={23,4,56,8,9,5,3};
    create(a, 7);
    cout << search(first, 8)<<endl;
    Display(first);
}