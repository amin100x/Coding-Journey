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
int count(struct node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void reverse1(struct node *p)
{
    int *b, i = 0;
    struct node *q = p;
    b = (int *)malloc(sizeof(int) * count(p));
    while (q)
    {
        b[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q)
    {
        q->data = b[i--];
        q = q->next;
    }
}

// reverse by links 

void reverse2(struct node *p)
{
    struct node *q=NULL , *r=NULL;
    while (p)
    {
      r=q;
      q=p;
      p=p->next;
      q->next=r;
    }
    first=q;
}

void recursive(struct node *q ,struct node *p)
{
    if (p)
    {
        recursive(p, p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}
int main()
{
    int a[] = {2, 4, 5, 6, 7, 8, 97, 6, 5};
    create(a, 9);
    reverse1(first);
    reverse2(first);
    recursive(NULL ,first);
    display(first);
}