#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class linkedlist
{
private:
    node *first;

public:
    linkedlist() { first = NULL; }
    linkedlist(int a[], int n);
    ~linkedlist();

    void display();
    void insert(int index, int x);
    int Delete(int index);
    int length();
};

linkedlist::linkedlist(int a[], int n)
{
    node *t, *last;
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

linkedlist::~linkedlist()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void linkedlist::display()
{
    node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int linkedlist::length()
{
    node *p = first;
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void linkedlist::insert(int index, int x)
{
    node *t, *p = first;

    if (index < 0 || index > length())
    {
        return;
    }
    t = new node;
    t->data = x;
    t->next = NULL;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int linkedlist::Delete(int index)
{
    node *p,*q=NULL;
    int x= -1;

    if (index<1 || index>length())
    {
        return -1;
    }
    if(index==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }
    else
    {
        p=first;
        for(int i=0 ; i<index-1 ; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
    }
    return x;
}

int main()
{
    int a[]={34,5,6,7,8,9};
    linkedlist l(a,6);
    l.display();
}