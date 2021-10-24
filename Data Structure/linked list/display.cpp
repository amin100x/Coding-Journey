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

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void RecursivelyDisplay(struct node *p)
{
    if (p!=NULL)
    {
        printf("%d ", p->data);
        RecursivelyDisplay(p->next);
    }
    
}
int main()
{
    int a[]={1,4,5,6,8,5,7,8,5,4};
    create(a, 10);
    display(first);
    cout<<endl;
    RecursivelyDisplay(first);
}