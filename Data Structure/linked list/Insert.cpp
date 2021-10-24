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
        last=  t;
    }
}

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insert(struct node *p, int pos, int x)
{
    struct node *t;
    if (pos == 0)
    {
        t = new node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if(pos>0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p != 0; i++) //p ne position sudhi lai avava
        {
            p = p->next;
        }
        if (p)
        {
            t = new node;
            t->data = x;
            t->next = p->next;
            p->next=t;
        }
    }
}
int main()
{
    int a[]= {2,3,45,67,8,9,0,67};
    create(a, 8);
    display(first);
    cout<<endl;
    insert(first, 4, 7);
    display(first);
}