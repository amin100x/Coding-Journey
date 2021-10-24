#include <iostream>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *first=NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    first=new node;
    first->prev=NULL;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1 ;i<n ;i++)
    {
        t=new node;
        t->data=a[i];
        t->prev=last;
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while (p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int length(struct node *p)
{
    int l=0;
    while (p)
    {
        p=p->next;
        l++;
    }
    return l;
}

int main()
{
    int a[]={12,3,45,6,7,8};
    create(a,6);
    display(first);
    cout<<endl <<length(first);
}