//concate etle 2 linked list mathi 1 banavi
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL, *secound = NULL, *third = NULL;

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
void create2(int a[], int n)
{
    struct node *t, *last;
    secound = new node;
    secound->data = a[0];
    secound->next = NULL;
    last = secound;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
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
void concate(struct node *p, struct node *q)
{
    third = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}
int main()
{
    int a[] = {12, 33, 45, 56, 78, 89};
    int b[] = {13, 34, 46, 67, 80};
    create(a, 6);
    create2(b, 5);
    concate(first,secound);
    display(third);
}