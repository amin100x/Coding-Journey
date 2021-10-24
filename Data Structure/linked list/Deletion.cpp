#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL;

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
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int delete1(struct node *p , int index )
{
    struct node *q=NULL;
    int x=-1;
    if (index <0 || index > count(p))
    {
        return -1;
    }
    if (index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else
    {
        for(int i=0; i<index-1 ; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
    
}
int main()
{
    int a[] = {12, 3, 45, 6, 77, 54};
    create(a , 6);
    cout<<delete1(first , 3)<<endl;
    display(first);
}